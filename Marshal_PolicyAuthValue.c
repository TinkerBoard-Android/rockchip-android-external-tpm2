// Copyright 2015 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// THIS CODE IS GENERATED - DO NOT MODIFY!

#include "MemoryLib_fp.h"
#include "PolicyAuthValue_fp.h"

TPM_RC PolicyAuthValue_In_Unmarshal(PolicyAuthValue_In* target,
                                    TPM_HANDLE request_handles[],
                                    BYTE** buffer,
                                    INT32* size) {
  TPM_RC result = TPM_RC_SUCCESS;
  // Get request handles from request_handles array.
  target->policySession = request_handles[0];
  return result;
}

TPM_RC Exec_PolicyAuthValue(TPMI_ST_COMMAND_TAG tag,
                            BYTE** request_parameter_buffer,
                            INT32* request_parameter_buffer_size,
                            TPM_HANDLE request_handles[],
                            UINT32* response_handle_buffer_size,
                            UINT32* response_parameter_buffer_size) {
  TPM_RC result = TPM_RC_SUCCESS;
  PolicyAuthValue_In in;
#ifdef TPM_CC_PolicyAuthValue
  BYTE* response_buffer;
  INT32 response_buffer_size;
#endif
  *response_handle_buffer_size = 0;
  *response_parameter_buffer_size = 0;
  // Unmarshal request parameters to input structure.
  result = PolicyAuthValue_In_Unmarshal(&in, request_handles,
                                        request_parameter_buffer,
                                        request_parameter_buffer_size);
  if (result != TPM_RC_SUCCESS) {
    return result;
  }
  // Execute command.
  result = TPM2_PolicyAuthValue(&in);
  if (result != TPM_RC_SUCCESS) {
    return result;
  }
#ifdef TPM_CC_PolicyAuthValue
  response_buffer = MemoryGetResponseBuffer(TPM_CC_PolicyAuthValue) + 10;
  response_buffer_size = MAX_RESPONSE_SIZE - 10;
  // Add parameter_size field, always equal to 0 here.
  if (tag == TPM_ST_SESSIONS) {
    UINT32_Marshal(response_parameter_buffer_size, &response_buffer,
                   &response_buffer_size);
  }
  return TPM_RC_SUCCESS;
#endif
  return TPM_RC_COMMAND_CODE;
}
