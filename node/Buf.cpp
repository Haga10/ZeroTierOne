/*
 * Copyright (c)2013-2020 ZeroTier, Inc.
 *
 * Use of this software is governed by the Business Source License included
 * in the LICENSE.TXT file in the project's root directory.
 *
 * Change Date: 2024-01-01
 *
 * On the date above, in accordance with the Business Source License, use
 * of this software will be governed by version 2.0 of the Apache License.
 */
/****/

#include "Buf.hpp"

namespace ZeroTier {

#ifdef __GNUC__
uintptr_t Buf_pool = 0;
#else
std::atomic<uintptr_t> Buf_pool(0);
#endif

} // namespace ZeroTier
