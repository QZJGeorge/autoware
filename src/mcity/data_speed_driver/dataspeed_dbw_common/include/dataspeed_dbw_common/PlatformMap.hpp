/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2015-2021, Dataspeed Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Dataspeed Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

#pragma once

// Version classes
#include <dataspeed_dbw_common/ModuleVersion.hpp>
#include <dataspeed_dbw_common/PlatformVersion.hpp>

// Standard libraries
#include <vector>

namespace dataspeed_dbw_common {

// FastMap
class PlatformMap {
public:
  constexpr PlatformMap() {}
  constexpr PlatformMap(Platform p, Module m, ModuleVersion v) {
    put(p, m, v);
  }
  constexpr PlatformMap(const PlatformVersion& x) {
    put(x);
  }
  constexpr PlatformMap(const std::vector<PlatformVersion>& vec) {
    put(vec);
  };
  constexpr void put(const Platform& p, const Module& m, const ModuleVersion& v) {
    if (p >= P_PLATFORM_MAX || m >= M_MODULE_MAX) {
      return;
    }
    map_[p][m] = v;
  }
  constexpr void put(const PlatformVersion& x) {
    put(x.p, x.m, x.v);
  }
  void put(const std::vector<PlatformVersion>& vec) {
    for (const PlatformVersion& entry : vec) {
      put(entry);
    }
  }
  constexpr ModuleVersion get(const Platform& p, const Module& m) const {
    if (p >= P_PLATFORM_MAX || m >= M_MODULE_MAX) {
      return ModuleVersion();
    }
    return map_[p][m];
  }
  constexpr ModuleVersion get(const PlatformVersion& x) const {
    if (x.p >= P_PLATFORM_MAX || x.m >= M_MODULE_MAX) {
      return ModuleVersion();
    }
    return map_[x.p][x.m];
  }
  constexpr bool hasValid(const Module& m) const {
    if (m >= M_MODULE_MAX) {
      return false;
    }
    for (int platform = 0; platform < P_PLATFORM_MAX; ++platform) {
      if (map_[platform][m].valid()) {
        return true;
      }
    }
    return false;
  }
  /**
   * @brief Finds all valid ModuleVersions with the given module from all platforms.
   * @param[in] m the module to find
   * @return On success, a vector containing PlatformVersions found. On failure, an empty vector.
   */
  const std::vector<PlatformVersion> find(const Module& m) const {
    if (m >= M_MODULE_MAX) {
      return std::vector<PlatformVersion>();
    }
    std::vector<PlatformVersion> out;
    for (int platform = 0; platform < P_PLATFORM_MAX; ++platform) {
      if (map_[platform][m].valid()) {
        out.push_back(PlatformVersion(Platform(platform), m, map_[platform][m]));
      }
    }
    return out;
  }

private:
  ModuleVersion map_[P_PLATFORM_MAX][M_MODULE_MAX];
  friend class PlatformSubMap;
};
// Ensure the size of our "map" doesn't expand out of control
static_assert(P_PLATFORM_MAX * M_MODULE_MAX * sizeof(ModuleVersion) < 16 * 1024);  // 16kb

constexpr bool operator<(const PlatformVersion& x, const PlatformMap& map) {
  return x < map.get(x);
}
constexpr bool operator>(const PlatformVersion& x, const PlatformMap& map) {
  return x > map.get(x);
}
constexpr bool operator<=(const PlatformVersion& x, const PlatformMap& map) {
  return x <= map.get(x);
}
constexpr bool operator>=(const PlatformVersion& x, const PlatformMap& map) {
  return x >= map.get(x);
}
constexpr bool operator==(const PlatformVersion& x, const PlatformMap& map) {
  return x == map.get(x);
}
constexpr bool operator!=(const PlatformVersion& x, const PlatformMap& map) {
  return x != map.get(x);
}

} // namespace dbw_ford_can
