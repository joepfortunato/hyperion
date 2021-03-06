//------------------------------------------------------------------------------
// Copyright 2005 Tom Haines

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#include "eos/mem/preempt.h"

namespace eos
{
 namespace mem
 {
//------------------------------------------------------------------------------

EOS_VAR_DEF PreAlloc<8,pre8_size> pre8;
EOS_VAR_DEF PreAlloc<16,pre16_size> pre16;
EOS_VAR_DEF PreAlloc<32,pre32_size> pre32;
EOS_VAR_DEF PreAlloc<64,pre64_size> pre64;

//------------------------------------------------------------------------------
 };
};
