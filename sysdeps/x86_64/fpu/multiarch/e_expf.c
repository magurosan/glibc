/* Multiple versions of IEEE 754 expf.
   Copyright (C) 2017 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

extern double __redirect_ieee754_expf (double);

#define SYMBOL_NAME ieee754_expf
#include "ifunc-fma.h"

libc_ifunc_redirected (__redirect_ieee754_expf, __ieee754_expf,
		       IFUNC_SELECTOR ());
strong_alias (__ieee754_expf, __expf_finite)
