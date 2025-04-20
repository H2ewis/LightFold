#pragma once

#include "LightFold.h"

namespace lightfold {

class Vec3 {
public:
  local_real x{0}, y{0}, z{0};

  Vec3(local_real x, local_real y, local_real z) : x(x), y(y), z(z) {}

  Vec3 operator+(const Vec3 &v) const { return Vec3(x + v.x, y + v.y, z + v.z); }
  Vec3 &operator+=(const Vec3 &v) { x += v.x, y += v.y, z += v.z; }
  Vec3 operator-(const Vec3 &v) const { return Vec3(x - v.x, y - v.y, z - v.z); }
  Vec3 &operator-=(const Vec3 &v) { x -= v.x, y -= v.y, z -= v.z; }
  Vec3 operator*(const local_real s) const { return Vec3(x * s, y * s, z * s); }
  Vec3 &operator*=(const local_real &s) { x *= s, y *= s, z *= s; }
  Vec3 operator/(const local_real s) const { return Vec3(x / s, y / s, z / s); }
  Vec3 &operator/=(const local_real &s) { x /= s, y /= s, z /= s; }
};

inline Vec3 operator*(const local_real s, const Vec3 &v) { return v * s; }

class Cov3 {
public:
  local_real x{0}, y{0}, z{0};

  Cov3(local_real x, local_real y, local_real z) : x(x), y(y), z(z) {}

  Cov3 operator+(const Cov3 &v) const { return Cov3(x + v.x, y + v.y, z + v.z); }
  Cov3 &operator+=(const Cov3 &v) { x += v.x, y += v.y, z += v.z; }
  Cov3 operator-(const Cov3 &v) const { return Cov3(x - v.x, y - v.y, z - v.z); }
  Cov3 &operator-=(const Cov3 &v) { x -= v.x, y -= v.y, z -= v.z; }
  Cov3 operator*(const local_real s) const { return Cov3(x * s, y * s, z * s); }
  Cov3 &operator*=(const local_real &s) { x *= s, y *= s, z *= s; }
};

inline Cov3 operator*(const local_real s, const Cov3 &v) { return v * s; }

local_real operator*(const Cov3 &u, const Vec3 &v) { return u.x * v.x + u.y * v.y + u.z * v.z; }

} // namespace lightfold