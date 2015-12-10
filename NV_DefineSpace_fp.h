/*
 * Copyright 2015 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef __TPM2_NV_DEFINESPACE_FP_H
#define __TPM2_NV_DEFINESPACE_FP_H

typedef struct {
  TPM_RH authHandle;
  TPM2B_AUTH auth;
  TPMS_NV_PUBLIC publicInfo;
} NV_DefineSpace_In;

TPM_RC TPM2_NV_DefineSpace(NV_DefineSpace_In *in);

#endif  // __TPM2_NV_DEFINESPACE_FP_H
