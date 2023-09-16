// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=6ab5f8f6ff4a68382bd5e239ad2c8e2c12c39c6d$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_URLREQUEST_CLIENT_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_URLREQUEST_CLIENT_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_urlrequest_capi.h"
#include "include/cef_urlrequest.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefURLRequestClientCppToC
    : public CefCppToCRefCounted<CefURLRequestClientCppToC,
                                 CefURLRequestClient,
                                 cef_urlrequest_client_t> {
 public:
  CefURLRequestClientCppToC();
  virtual ~CefURLRequestClientCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_URLREQUEST_CLIENT_CPPTOC_H_