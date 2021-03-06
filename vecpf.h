/* This is part of libvecpf, the Vector Printf Library.

   Author(s): Michael Brutman <brutman@us.ibm.com>
              Ryan S. Arnold <rsa@linux.vnet.ibm.com>

   Copyright (c) 2010, 2011, IBM Corporation
   All rights reserved.

   The Vector Printf Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License version
   2.1.

   The Vector Printf Library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser
   General Public License version 2.1 for more details.

   You should have received a copy of the GNU Lesser General Public License
   version 2.1 along with the Vector Printf Library; if not, write to the
   Free Software Foundation, Inc.,59 Temple Place, Suite 330, Boston,
   MA 02111-1307 USA.

   Please see libvecpf/LICENSE for more information.  */

#ifndef _VECPF_H
#define _VECPF_H

#define LIBVECTOR_VECTOR_WIDTH_BYTES (16)

/* Table of recognized data types.  */

#define VDT_unsigned_long_long (0)
#define VDT_signed_long_long   (1)
#define VDT_unsigned_long      (2)
#define VDT_signed_long        (3)
#define VDT_unsigned_int       (4)
#define VDT_signed_int         (5)
#define VDT_unsigned_short     (6)
#define VDT_signed_short       (7)
#define VDT_unsigned_char      (8)
#define VDT_signed_char        (9)
#define VDT_float              (10)
#define VDT_double             (11)
#ifdef HAVE_INT128_T
#define VDT_int128             (12)
#endif

/* Union used to pick elements of a particular type from a vector.  */

typedef union
{
  vector unsigned int v;
  unsigned long long  ull[2];
  signed long long    sll[2];
  unsigned int        ui[4];
  signed int          si[4];
  unsigned short      sh[8];
  signed short        uh[8];
  unsigned char      uc[16];
  signed char        sc[16];
  float                f[4];
  double               d[2];
#ifdef HAVE_INT128_T
  vector __int128_t    i;
#endif
} vp_u_t;

#endif /* _VECPF_H  */
