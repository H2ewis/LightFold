#pragma once

#define LIGHTFOLD_REAL_FPM

#include "fpm/include/fpm/ios.hpp"

namespace lightfold {

#ifdef LIGHTFOLD_REAL_FPM
using global_real = fpm::fixed_24_8;
using local_real = fpm::fixed_8_24;
#else
using global_real = float;
using local_real = float;
#endif

} // namespace lightfold