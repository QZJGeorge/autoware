/*********************************************************************
 * C++ unit test for dbw_common/PlatformMap.h
 *********************************************************************/

#include <gtest/gtest.h>

// File under test
#include <dataspeed_dbw_common/PlatformMap.hpp>
using namespace dataspeed_dbw_common;

using PV = PlatformVersion;
using MV = ModuleVersion;

// Test if x equals any of y
template <typename T>
constexpr bool EQ_ANY(T x, std::vector<T> y) {
  for (T v : y) {
    if (v == x) {
      return true;
    }
  }
  return false;
}

// Test constructors
TEST(PlatformMap, constructor) {
  const Platform p = Platform(1);
  const Module m = Module(2);

  // Empty
  EXPECT_EQ(MV(), PlatformMap().get(p, m));

  // Individual fields
  EXPECT_EQ(MV(1, 2, 3), PlatformMap(p, m, MV(1, 2, 3)).get(p, m));

  // PV class
  EXPECT_EQ(MV(1, 2, 3), PlatformMap(PV(p, m, MV(1, 2, 3))).get(p, m));

  // Vector of PV
  EXPECT_EQ(MV(1, 2, 3), PlatformMap({PV(p, m, MV(1, 2, 3))}).get(p, m));
}

// Test adding/putting
TEST(PlatformMap, put) {
  const Platform p0 = Platform(0);
  const Module m0 = Module(0);
  const Platform p1 = Platform(1);
  const Module m1 = Module(1);
  const Platform p2 = Platform(P_PLATFORM_MAX - 1);
  const Module m2 = Module(M_MODULE_MAX - 1);

  const ModuleVersion mv0 = MV(10, 11, 12);
  const ModuleVersion mv1 = MV(20, 21, 22);
  const ModuleVersion mv2 = MV(30, 31, 32);

  PlatformMap map;

  // Test platform/module put method
  EXPECT_EQ(MV(), map.get(p0, m0));
  map.put(p0, m0, mv0);
  EXPECT_EQ(mv0, map.get(p0, m0));
  map.put(p0, m0, MV());
  EXPECT_EQ(MV(), map.get(p0, m0));

  // Test platform put method
  EXPECT_EQ(MV(), map.get(p0, m1));
  map.put(PV(p0, m1, mv1));
  EXPECT_EQ(mv1, map.get(p0, m1));
  map.put(PV(p0, m1, MV()));
  EXPECT_EQ(MV(), map.get(p0, m1));

  // Test platform bulk put method
  EXPECT_EQ(MV(), map.get(p0, m0));
  EXPECT_EQ(MV(), map.get(p0, m1));
  EXPECT_EQ(MV(), map.get(p0, m2));
  EXPECT_EQ(MV(), map.get(p1, m0));
  EXPECT_EQ(MV(), map.get(p1, m1));
  EXPECT_EQ(MV(), map.get(p1, m2));
  EXPECT_EQ(MV(), map.get(p2, m0));
  EXPECT_EQ(MV(), map.get(p2, m1));
  EXPECT_EQ(MV(), map.get(p2, m2));
  map.put({
      PV(p0, m0, mv0),
      PV(p0, m1, mv1),
      PV(p0, m2, mv2),
      PV(p1, m0, mv0),
      PV(p1, m1, mv1),
      PV(p1, m2, mv2),
      PV(p2, m0, mv0),
      PV(p2, m1, mv1),
      PV(p2, m2, mv2),
  });
  EXPECT_EQ(mv0, map.get(p0, m0));
  EXPECT_EQ(mv1, map.get(p0, m1));
  EXPECT_EQ(mv2, map.get(p0, m2));
  EXPECT_EQ(mv0, map.get(p1, m0));
  EXPECT_EQ(mv1, map.get(p1, m1));
  EXPECT_EQ(mv2, map.get(p1, m2));
  EXPECT_EQ(mv0, map.get(p2, m0));
  EXPECT_EQ(mv1, map.get(p2, m1));
  EXPECT_EQ(mv2, map.get(p2, m2));
}

// Test the module lookup methods
TEST(PlatformMap, find) {
  const Platform px = Platform(0);
  const Module mx = Module(0);
  const Platform py = Platform(1);
  const Module my = Module(1);
  const Platform pz = Platform(2);
  const Module mz = Module(2);
  const Platform pw = Platform(3);
  const Module mw = Module(3);

  // Construct PlatformMap with multiple platforms and modules
  const PlatformMap x({
      {PV(px, mx, MV(10, 11, 12))},
      {PV(px, my, MV(20, 21, 22))},
      {PV(px, mz, MV(30, 31, 32))},
      {PV(py, mx, MV(40, 41, 42))},
      {PV(py, my, MV(50, 51, 52))},
      {PV(py, mz, MV(60, 61, 62))},
      {PV(pz, mx, MV(70, 71, 72))},
      {PV(pz, my, MV(80, 81, 82))},
      {PV(pz, mz, MV(90, 91, 92))},
  });

  // Find entries that don't exist
  EXPECT_EQ(MV(), x.get(px, mw));
  EXPECT_EQ(MV(), x.get(pw, mx));
  EXPECT_EQ(MV(), x.get(PV(px, mw, 0, 0, 0)));
  EXPECT_EQ(MV(), x.get(PV(pw, mx, 0, 0, 0)));
  EXPECT_FALSE(x.hasValid(mw));

  // Find each entry
  EXPECT_EQ(MV(10, 11, 12), x.get(px, mx));
  EXPECT_EQ(MV(20, 21, 22), x.get(px, my));
  EXPECT_EQ(MV(30, 31, 32), x.get(px, mz));
  EXPECT_EQ(MV(40, 41, 42), x.get(py, mx));
  EXPECT_EQ(MV(50, 51, 52), x.get(py, my));
  EXPECT_EQ(MV(60, 61, 62), x.get(py, mz));
  EXPECT_EQ(MV(70, 71, 72), x.get(pz, mx));
  EXPECT_EQ(MV(80, 81, 82), x.get(pz, my));
  EXPECT_EQ(MV(90, 91, 92), x.get(pz, mz));
  EXPECT_EQ(MV(10, 11, 12), x.get(PV(px, mx, 0, 0, 0)));
  EXPECT_EQ(MV(20, 21, 22), x.get(PV(px, my, 0, 0, 0)));
  EXPECT_EQ(MV(30, 31, 32), x.get(PV(px, mz, 0, 0, 0)));
  EXPECT_EQ(MV(40, 41, 42), x.get(PV(py, mx, 0, 0, 0)));
  EXPECT_EQ(MV(50, 51, 52), x.get(PV(py, my, 0, 0, 0)));
  EXPECT_EQ(MV(60, 61, 62), x.get(PV(py, mz, 0, 0, 0)));
  EXPECT_EQ(MV(70, 71, 72), x.get(PV(pz, mx, 0, 0, 0)));
  EXPECT_EQ(MV(80, 81, 82), x.get(PV(pz, my, 0, 0, 0)));
  EXPECT_EQ(MV(90, 91, 92), x.get(PV(pz, mz, 0, 0, 0)));

  // Find modules regardless of platform
  for (const PlatformVersion pv : x.find(mx)) {
    EXPECT_TRUE(EQ_ANY(pv.v, {MV(10, 11, 12), MV(40, 41, 42), MV(70, 71, 72)}));
  }
  for (const PlatformVersion pv : x.find(my)) {
    EXPECT_TRUE(EQ_ANY(pv.v, {MV(20, 21, 22), MV(50, 51, 52), MV(80, 81, 82)}));
  }
  for (const PlatformVersion pv : x.find(mz)) {
    EXPECT_TRUE(EQ_ANY(pv.v, {MV(30, 31, 32), MV(60, 61, 62), MV(90, 91, 92)}));
  }
}

// Test operators
TEST(PlatformMap, operators) {
  const Platform px = Platform(0);
  const Module mx = Module(0);
  const Platform py = Platform(1);
  const Module my = Module(1);
  const Platform pz = Platform(2);
  const Module mz = Module(2);
  const Platform pw = Platform(3);
  const Module mw = Module(3);

  // Construct PlatformMap with multiple platforms and modules
  const PlatformMap x({
      {PV(px, mx, MV(10, 11, 12))},
      {PV(px, my, MV(20, 21, 22))},
      {PV(px, mz, MV(30, 31, 32))},
      {PV(py, mx, MV(40, 41, 42))},
      {PV(py, my, MV(50, 51, 52))},
      {PV(py, mz, MV(60, 61, 62))},
      {PV(pz, mx, MV(70, 71, 72))},
      {PV(pz, my, MV(80, 81, 82))},
      {PV(pz, mz, MV(90, 91, 92))},
  });

  // Compare PV with PlatformMap entries that don't exist
  EXPECT_TRUE (PV(pw, mw, 0, 0, 0) == x);
  EXPECT_FALSE(PV(pw, mw, 1, 1, 1) <  x);
  EXPECT_FALSE(PV(pw, mw, 1, 1, 1) <= x);
  EXPECT_TRUE (PV(pw, mw, 1, 1, 1) >  x);
  EXPECT_TRUE (PV(pw, mw, 1, 1, 1) >= x);
  EXPECT_FALSE(PV(pw, mw, 1, 1, 1) == x);
  EXPECT_TRUE (PV(pw, mw, 1, 1, 1) != x);

  // Compare PV with PlatformMap entries
  EXPECT_TRUE (PV(py, my, 45, 45, 45) <  x);
  EXPECT_FALSE(PV(py, my, 55, 55, 55) <  x);
  EXPECT_TRUE (PV(py, my, 45, 45, 45) <= x);
  EXPECT_TRUE (PV(py, my, 50, 51, 52) <= x);
  EXPECT_FALSE(PV(py, my, 55, 55, 55) <= x);
  EXPECT_FALSE(PV(py, my, 45, 45, 45) >  x);
  EXPECT_TRUE (PV(py, my, 55, 55, 55) >  x);
  EXPECT_FALSE(PV(py, my, 45, 45, 45) >= x);
  EXPECT_TRUE (PV(py, my, 50, 51, 52) >= x);
  EXPECT_TRUE (PV(py, my, 55, 55, 55) >= x);
  EXPECT_TRUE (PV(py, my, 50, 51, 52) == x);
  EXPECT_FALSE(PV(py, my, 50, 50, 50) == x);
  EXPECT_TRUE (PV(py, my, 50, 50, 50) != x);
  EXPECT_FALSE(PV(py, my, 50, 51, 52) != x);
}
