/*BEGIN_LEGAL 

Copyright (c) 2019 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
/// @file xed-reg-class-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_REG_CLASS_ENUM_H)
# define XED_REG_CLASS_ENUM_H
#include "xed-common-hdrs.h"
typedef enum {
  XED_REG_CLASS_INVALID,
  XED_REG_CLASS_BNDCFG,
  XED_REG_CLASS_BNDSTAT,
  XED_REG_CLASS_BOUND,
  XED_REG_CLASS_CR,
  XED_REG_CLASS_DR,
  XED_REG_CLASS_FLAGS,
  XED_REG_CLASS_GPR,
  XED_REG_CLASS_GPR16,
  XED_REG_CLASS_GPR32,
  XED_REG_CLASS_GPR64,
  XED_REG_CLASS_GPR8,
  XED_REG_CLASS_IP,
  XED_REG_CLASS_MASK,
  XED_REG_CLASS_MMX,
  XED_REG_CLASS_MSR,
  XED_REG_CLASS_MXCSR,
  XED_REG_CLASS_PSEUDO,
  XED_REG_CLASS_PSEUDOX87,
  XED_REG_CLASS_SR,
  XED_REG_CLASS_TMP,
  XED_REG_CLASS_X87,
  XED_REG_CLASS_XCR,
  XED_REG_CLASS_XMM,
  XED_REG_CLASS_YMM,
  XED_REG_CLASS_ZMM,
  XED_REG_CLASS_LAST
} xed_reg_class_enum_t;

/// This converts strings to #xed_reg_class_enum_t types.
/// @param s A C-string.
/// @return #xed_reg_class_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_class_enum_t str2xed_reg_class_enum_t(const char* s);
/// This converts strings to #xed_reg_class_enum_t types.
/// @param p An enumeration element of type xed_reg_class_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_reg_class_enum_t2str(const xed_reg_class_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_reg_class_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_class_enum_t xed_reg_class_enum_t_last(void);
#endif
