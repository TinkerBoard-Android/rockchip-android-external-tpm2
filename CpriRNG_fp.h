/*
 * Copyright 2015 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef __TPM2_CPRIRNG_FP_H
#define __TPM2_CPRIRNG_FP_H

LIB_EXPORT UINT16 _cpri__GenerateRandom(
        INT32                randomSize,
        BYTE                *buffer
                                        );
LIB_EXPORT BOOL _cpri__RngStartup(void);

#endif // __TPM2_CPRIRNG_FP_H
