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
#include <cstdint>

// Undefine GNU C system macros that we use for other purposes
#ifdef major
#undef major
#endif
#ifdef minor
#undef minor
#endif

namespace dataspeed_dbw_common {

class ModuleVersion {
public:
  constexpr ModuleVersion() {}
  constexpr ModuleVersion(const uint16_t major, const uint16_t minor, const uint16_t build)
      : major_(major), minor_(minor), build_(build) {}

  constexpr bool operator< (const ModuleVersion& other) const { return this->full() < other.full(); }
  constexpr bool operator> (const ModuleVersion& other) const { return this->full() > other.full(); }
  constexpr bool operator<=(const ModuleVersion& other) const { return this->full() <= other.full(); }
  constexpr bool operator>=(const ModuleVersion& other) const { return this->full() >= other.full(); }
  constexpr bool operator==(const ModuleVersion& other) const { return this->full() == other.full(); }
  constexpr bool operator!=(const ModuleVersion& other) const { return this->full() != other.full(); }
  constexpr bool valid() const { return full() != 0; }

  constexpr uint16_t major() const { return major_; }
  constexpr uint16_t minor() const { return minor_; }
  constexpr uint16_t build() const { return build_; }

private:
  constexpr uint64_t full() const {
    // Bit shifting is more portable than unions
    uint64_t major = (uint64_t)major_ << 32;
    uint64_t minor = (uint64_t)minor_ << 16;
    uint64_t build = (uint64_t)build_;
    return major | minor | build;
  }
  uint16_t major_ = 0;
  uint16_t minor_ = 0;
  uint16_t build_ = 0;
};

} // namespace dataspeed_dbw_common
