/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/index.h>
#include <Array.hpp>

namespace cpu
{

template<typename T>
Array<T> index(const Array<T>& in, const af_index_t idxrs[]);

}
