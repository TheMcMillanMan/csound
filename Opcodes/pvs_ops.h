/*
    pvs_ops.h:

    This file is part of Csound.

    The Csound Library is free software; you can redistribute it
    and/or modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    Csound is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with Csound; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
    02110-1301 USA
*/

#ifndef CSOUND_PVS_OPS_H
#define CSOUND_PVS_OPS_H

/* #include "csdl.h" */
#include "csoundCore.h"

#include "interlocks.h"


extern int ifd_init_(CSOUND *);
extern int partials_init_(CSOUND *);
extern int psynth_init_(CSOUND *);
extern int pvsbasic_init_(CSOUND *);
extern int pvscent_init_(CSOUND *);
extern int pvsdemix_init_(CSOUND *);
extern int pvsband_init_(CSOUND *);

#endif  /* CSOUND_PVS_OPS_H */

