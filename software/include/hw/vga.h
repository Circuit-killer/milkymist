/*
 * Milkymist VJ SoC (Software)
 * Copyright (C) 2007, 2008, 2009 Sebastien Bourdeauducq
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __HW_VGA_H
#define __HW_VGA_H

#include <hw/common.h>

#define CSR_VGA_RESET 		MMPTR(0x80003000)

#define VGA_RESET		(0x01)

#define CSR_VGA_HRES 		MMPTR(0x80003004)
#define CSR_VGA_HSYNC_START	MMPTR(0x80003008)
#define CSR_VGA_HSYNC_END	MMPTR(0x8000300C)
#define CSR_VGA_HSCAN 		MMPTR(0x80003010)

#define CSR_VGA_VRES 		MMPTR(0x80003014)
#define CSR_VGA_VSYNC_START	MMPTR(0x80003018)
#define CSR_VGA_VSYNC_END	MMPTR(0x8000301C)
#define CSR_VGA_VSCAN 		MMPTR(0x80003020)

#define CSR_VGA_BASEADDRESS	MMPTR(0x80003024)
#define CSR_VGA_BASEADDRESS_ACT	MMPTR(0x80003028)

#define CSR_VGA_BURST_COUNT	MMPTR(0x8000302C)

#define CSR_VGA_DDC		MMPTR(0x80003030)

#define VGA_DDC_SDAIN		(0x1)
#define VGA_DDC_SDAOUT		(0x2)
#define VGA_DDC_SDAOE		(0x4)
#define VGA_DDC_SDC		(0x8)

#endif /* __HW_VGA_H */
