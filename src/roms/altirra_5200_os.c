/*
 * altirra_5200_os.c - 5200 OS ROM replacement
 *
 * Compiled from the sources in the emuos folder.
 *
 * Altirra - Atari 800/800XL emulator
 * 5200 OS ROM replacement
 * Copyright (C) 2008-2018 Avery Lee
 *
 * Copying and distribution of this file, with or without modification,
 * are permitted in any medium without royalty provided the copyright
 * notice and this notice are preserved.  This file is offered as-is,
 * without any warranty.
 */

#include "config.h"
#include "atari.h"

#ifdef EMUOS_ALTIRRA
UBYTE const ROM_altirra_5200_os[0x800] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x18,0x18,0x18,0x18,0x00,0x18,0x00,
	0x00,0x66,0x66,0x66,0x00,0x00,0x00,0x00,
	0x00,0x66,0xff,0x66,0x66,0xff,0x66,0x00,
	0x18,0x3e,0x60,0x3c,0x06,0x7c,0x18,0x00,
	0x00,0x66,0x6c,0x18,0x30,0x66,0x46,0x00,
	0x1c,0x36,0x1c,0x38,0x6f,0x66,0x3b,0x00,
	0x00,0x18,0x18,0x18,0x00,0x00,0x00,0x00,
	0x00,0x0e,0x1c,0x18,0x18,0x1c,0x0e,0x00,
	0x00,0x70,0x38,0x18,0x18,0x38,0x70,0x00,
	0x00,0x66,0x3c,0xff,0x3c,0x66,0x00,0x00,
	0x00,0x18,0x18,0x7e,0x18,0x18,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x30,
	0x00,0x00,0x00,0x7e,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,
	0x00,0x06,0x0c,0x18,0x30,0x60,0x40,0x00,
	0x00,0x3c,0x66,0x6e,0x76,0x66,0x3c,0x00,
	0x00,0x18,0x38,0x18,0x18,0x18,0x7e,0x00,
	0x00,0x3c,0x66,0x0c,0x18,0x30,0x7e,0x00,
	0x00,0x7e,0x0c,0x18,0x0c,0x66,0x3c,0x00,
	0x00,0x0c,0x1c,0x3c,0x6c,0x7e,0x0c,0x00,
	0x00,0x7e,0x60,0x7c,0x06,0x66,0x3c,0x00,
	0x00,0x3c,0x60,0x7c,0x66,0x66,0x3c,0x00,
	0x00,0x7e,0x06,0x0c,0x18,0x30,0x30,0x00,
	0x00,0x3c,0x66,0x3c,0x66,0x66,0x3c,0x00,
	0x00,0x3c,0x66,0x3e,0x06,0x0c,0x38,0x00,
	0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x00,
	0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x30,
	0x06,0x0c,0x18,0x30,0x18,0x0c,0x06,0x00,
	0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,
	0x60,0x30,0x18,0x0c,0x18,0x30,0x60,0x00,
	0x00,0x3c,0x66,0x0c,0x18,0x00,0x18,0x00,
	0x00,0x3c,0x66,0x6e,0x6e,0x60,0x3e,0x00,
	0x00,0x18,0x3c,0x66,0x66,0x7e,0x66,0x00,
	0x00,0x7c,0x66,0x7c,0x66,0x66,0x7c,0x00,
	0x00,0x3c,0x66,0x60,0x60,0x66,0x3c,0x00,
	0x00,0x78,0x6c,0x66,0x66,0x6c,0x78,0x00,
	0x00,0x7e,0x60,0x7c,0x60,0x60,0x7e,0x00,
	0x00,0x7e,0x60,0x7c,0x60,0x60,0x60,0x00,
	0x00,0x3e,0x60,0x60,0x6e,0x66,0x3e,0x00,
	0x00,0x66,0x66,0x7e,0x66,0x66,0x66,0x00,
	0x00,0x7e,0x18,0x18,0x18,0x18,0x7e,0x00,
	0x00,0x06,0x06,0x06,0x06,0x66,0x3c,0x00,
	0x00,0x66,0x6c,0x78,0x78,0x6c,0x66,0x00,
	0x00,0x60,0x60,0x60,0x60,0x60,0x7e,0x00,
	0x00,0x63,0x77,0x7f,0x6b,0x63,0x63,0x00,
	0x00,0x66,0x76,0x7e,0x7e,0x6e,0x66,0x00,
	0x00,0x3c,0x66,0x66,0x66,0x66,0x3c,0x00,
	0x00,0x7c,0x66,0x66,0x7c,0x60,0x60,0x00,
	0x00,0x3c,0x66,0x66,0x66,0x6c,0x36,0x00,
	0x00,0x7c,0x66,0x66,0x7c,0x6c,0x66,0x00,
	0x00,0x3c,0x60,0x3c,0x06,0x06,0x3c,0x00,
	0x00,0x7e,0x18,0x18,0x18,0x18,0x18,0x00,
	0x00,0x66,0x66,0x66,0x66,0x66,0x7e,0x00,
	0x00,0x66,0x66,0x66,0x66,0x3c,0x18,0x00,
	0x00,0x63,0x63,0x6b,0x7f,0x77,0x63,0x00,
	0x00,0x66,0x66,0x3c,0x3c,0x66,0x66,0x00,
	0x00,0x66,0x66,0x3c,0x18,0x18,0x18,0x00,
	0x00,0x7e,0x0c,0x18,0x30,0x60,0x7e,0x00,
	0x00,0x1e,0x18,0x18,0x18,0x18,0x1e,0x00,
	0x00,0x40,0x60,0x30,0x18,0x0c,0x06,0x00,
	0x00,0x78,0x18,0x18,0x18,0x18,0x78,0x00,
	0x00,0x08,0x1c,0x36,0x63,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,
	0x00,0x36,0x7f,0x7f,0x3e,0x1c,0x08,0x00,
	0x18,0x18,0x18,0x1f,0x1f,0x18,0x18,0x18,
	0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
	0x18,0x18,0x18,0xf8,0xf8,0x00,0x00,0x00,
	0x18,0x18,0x18,0xf8,0xf8,0x18,0x18,0x18,
	0x00,0x00,0x00,0xf8,0xf8,0x18,0x18,0x18,
	0x03,0x07,0x0e,0x1c,0x38,0x70,0xe0,0xc0,
	0xc0,0xe0,0x70,0x38,0x1c,0x0e,0x07,0x03,
	0x01,0x03,0x07,0x0f,0x1f,0x3f,0x7f,0xff,
	0x00,0x00,0x00,0x00,0x0f,0x0f,0x0f,0x0f,
	0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xff,
	0x0f,0x0f,0x0f,0x0f,0x00,0x00,0x00,0x00,
	0xf0,0xf0,0xf0,0xf0,0x00,0x00,0x00,0x00,
	0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,
	0x00,0x00,0x00,0x00,0xf0,0xf0,0xf0,0xf0,
	0x00,0x1c,0x1c,0x77,0x77,0x08,0x1c,0x00,
	0x00,0x00,0x00,0x1f,0x1f,0x18,0x18,0x18,
	0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,
	0x18,0x18,0x18,0xff,0xff,0x18,0x18,0x18,
	0x00,0x00,0x3c,0x7e,0x7e,0x7e,0x3c,0x00,
	0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
	0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,
	0x00,0x00,0x00,0xff,0xff,0x18,0x18,0x18,
	0x18,0x18,0x18,0xff,0xff,0x00,0x00,0x00,
	0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
	0x18,0x18,0x18,0x1f,0x1f,0x00,0x00,0x00,
	0x78,0x60,0x78,0x60,0x7e,0x18,0x1e,0x00,
	0x00,0x18,0x3c,0x7e,0x18,0x18,0x18,0x00,
	0x00,0x18,0x18,0x18,0x7e,0x3c,0x18,0x00,
	0x00,0x18,0x30,0x7e,0x30,0x18,0x00,0x00,
	0x00,0x18,0x0c,0x7e,0x0c,0x18,0x00,0x00,
	0x00,0x18,0x3c,0x7e,0x7e,0x3c,0x18,0x00,
	0x00,0x00,0x3c,0x06,0x3e,0x66,0x3e,0x00,
	0x00,0x60,0x60,0x7c,0x66,0x66,0x7c,0x00,
	0x00,0x00,0x3c,0x60,0x60,0x60,0x3c,0x00,
	0x00,0x06,0x06,0x3e,0x66,0x66,0x3e,0x00,
	0x00,0x00,0x3c,0x66,0x7e,0x60,0x3c,0x00,
	0x00,0x0e,0x18,0x3e,0x18,0x18,0x18,0x00,
	0x00,0x00,0x3e,0x66,0x66,0x3e,0x06,0x7c,
	0x00,0x60,0x60,0x7c,0x66,0x66,0x66,0x00,
	0x00,0x18,0x00,0x38,0x18,0x18,0x3c,0x00,
	0x00,0x06,0x00,0x06,0x06,0x06,0x06,0x3c,
	0x00,0x60,0x60,0x6c,0x78,0x6c,0x66,0x00,
	0x00,0x38,0x18,0x18,0x18,0x18,0x3c,0x00,
	0x00,0x00,0x66,0x7f,0x7f,0x6b,0x63,0x00,
	0x00,0x00,0x7c,0x66,0x66,0x66,0x66,0x00,
	0x00,0x00,0x3c,0x66,0x66,0x66,0x3c,0x00,
	0x00,0x00,0x7c,0x66,0x66,0x7c,0x60,0x60,
	0x00,0x00,0x3e,0x66,0x66,0x3e,0x06,0x06,
	0x00,0x00,0x7c,0x66,0x60,0x60,0x60,0x00,
	0x00,0x00,0x3e,0x60,0x3c,0x06,0x7c,0x00,
	0x00,0x18,0x7e,0x18,0x18,0x18,0x0e,0x00,
	0x00,0x00,0x66,0x66,0x66,0x66,0x3e,0x00,
	0x00,0x00,0x66,0x66,0x66,0x3c,0x18,0x00,
	0x00,0x00,0x63,0x6b,0x7f,0x3e,0x36,0x00,
	0x00,0x00,0x66,0x3c,0x18,0x3c,0x66,0x00,
	0x00,0x00,0x66,0x66,0x66,0x3e,0x0c,0x78,
	0x00,0x00,0x7e,0x0c,0x18,0x30,0x7e,0x00,
	0x00,0x18,0x3c,0x7e,0x7e,0x18,0x3c,0x00,
	0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
	0x00,0x7e,0x78,0x7c,0x6e,0x66,0x06,0x00,
	0x08,0x18,0x38,0x78,0x38,0x18,0x08,0x00,
	0x10,0x18,0x1c,0x1e,0x1c,0x18,0x10,0x00,
	0x6c,0x00,0x02,0x48,0xa9,0x20,0x2c,0x0e,
	0xe8,0xd0,0x0d,0x45,0x00,0x8d,0x0e,0xe8,
	0xa5,0x00,0x8d,0x0e,0xe8,0x6c,0x10,0x02,
	0x30,0x0f,0xa9,0x80,0x45,0x00,0x8d,0x0e,
	0xe8,0xa5,0x00,0x8d,0x0e,0xe8,0x6c,0x0c,
	0x02,0x70,0x0f,0xa9,0x40,0x45,0x00,0x8d,
	0x0e,0xe8,0xa5,0x00,0x8d,0x0e,0xe8,0x6c,
	0x08,0x02,0x6a,0x2c,0x0e,0xe8,0xf0,0x0d,
	0x45,0x00,0x8d,0x0e,0xe8,0xa5,0x00,0x8d,
	0x0e,0xe8,0x6c,0x12,0x02,0x6a,0x24,0x00,
	0xf0,0x12,0x2c,0x0e,0xe8,0xd0,0x0d,0x45,
	0x00,0x8d,0x0e,0xe8,0xa5,0x00,0x8d,0x0e,
	0xe8,0x6c,0x14,0x02,0xa9,0x01,0x2c,0x0e,
	0xe8,0xd0,0x0d,0x45,0x00,0x8d,0x0e,0xe8,
	0xa5,0x00,0x8d,0x0e,0xe8,0x6c,0x16,0x02,
	0x2a,0x2c,0x0e,0xe8,0xd0,0x0d,0x45,0x00,
	0x8d,0x0e,0xe8,0xa5,0x00,0x8d,0x0e,0xe8,
	0x6c,0x18,0x02,0x2a,0x2c,0x0e,0xe8,0xd0,
	0x0d,0x45,0x00,0x8d,0x0e,0xe8,0xa5,0x00,
	0x8d,0x0e,0xe8,0x6c,0x1a,0x02,0x8a,0x48,
	0xba,0xbd,0x01,0x01,0x29,0x10,0xd0,0x03,
	0x6c,0x0e,0x02,0x68,0xaa,0x68,0x40,0xff,
	0xff,0xff,0x68,0xa8,0x68,0xaa,0x68,0x40,
	0x48,0x8a,0x48,0x98,0x48,0xe6,0x02,0xd0,
	0x08,0xe6,0x01,0xa5,0x04,0x30,0x02,0xe6,
	0x04,0xa5,0x03,0xd0,0xe5,0xa5,0x05,0x8d,
	0x02,0xd4,0xa5,0x06,0x8d,0x03,0xd4,0xa5,
	0x07,0x8d,0x00,0xd4,0xa0,0x00,0x24,0x04,
	0x10,0x02,0xa4,0x01,0xa2,0x08,0x98,0x55,
	0x08,0x9d,0x12,0xc0,0xca,0x10,0xf7,0xa2,
	0x07,0xbd,0x00,0xe8,0x95,0x11,0xca,0x10,
	0xf8,0x8d,0x0b,0xe8,0x6c,0x04,0x02,0xff,
	0xff,0xff,0x8a,0x48,0x98,0x48,0xad,0x09,
	0xe8,0x4a,0x29,0x0f,0xaa,0xbd,0x13,0xfd,
	0x6c,0x0a,0x02,0xff,0x0b,0x00,0x0a,0x0e,
	0x09,0x08,0x07,0x0d,0x06,0x05,0x04,0x0c,
	0x03,0x02,0x01,0x2c,0x0f,0xd4,0x8d,0x0f,
	0xd4,0x10,0x03,0x6c,0x06,0x02,0x6c,0x02,
	0x02,0x78,0xd8,0xa2,0xff,0x9a,0xad,0xfd,
	0xbf,0xc9,0xff,0xd0,0x03,0x6c,0xfe,0xbf,
	0xa2,0x00,0xa9,0x00,0x95,0x00,0x9d,0x00,
	0xc0,0x9d,0x00,0xd4,0x9d,0x00,0xe8,0xe8,
	0xd0,0xf2,0xa9,0xf8,0x8d,0x09,0xd4,0xa2,
	0x0b,0xbd,0x95,0xfe,0x9d,0x00,0x02,0xca,
	0x10,0xf7,0xa2,0x4f,0xbd,0xcd,0xfd,0x9d,
	0x00,0x10,0xca,0x10,0xf7,0xa2,0x13,0xbd,
	0xe8,0xbf,0x9d,0x50,0x10,0xca,0x10,0xf7,
	0xa9,0x10,0x85,0x0c,0xa9,0x0f,0x85,0x0d,
	0xa9,0x00,0x85,0x0e,0xa9,0x00,0x85,0x0f,
	0xa9,0x00,0x85,0x10,0xa9,0x04,0x8d,0x1b,
	0xc0,0xa2,0x0a,0xbd,0xc2,0xfd,0x9d,0x00,
	0x20,0xca,0x10,0xf7,0xa9,0x22,0x85,0x07,
	0xa9,0xc0,0x8d,0x0e,0xd4,0xa9,0x00,0x85,
	0x05,0xa9,0x20,0x85,0x06,0xa9,0x02,0x8d,
	0x0f,0xe8,0xa9,0xc0,0x85,0x00,0x8d,0x0e,
	0xe8,0xa9,0x78,0xc5,0x02,0xd0,0xfc,0x6c,
	0xfe,0xbf,0x70,0x70,0x70,0x42,0x00,0x10,
	0x82,0x07,0x41,0xc2,0xfd,0x21,0x6c,0x74,
	0x69,0x72,0x72,0x61,0x00,0x15,0x12,0x10,
	0x10,0x00,0x32,0x2f,0x2d,0x00,0x2b,0x65,
	0x72,0x6e,0x65,0x6c,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x2e,0x6f,0x77,
	0x00,0x70,0x6c,0x61,0x79,0x69,0x6e,0x67,
	0x1a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0x03,0xfc,0xb8,
	0xfc,0xb2,0xfc,0xa1,0xfe,0x02,0xfd,0xb2,
	0xfc,0x48,0xe6,0x0c,0xd0,0x04,0xa9,0x10,
	0x85,0x0c,0x68,0x40,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x23,0xfd,0x31,0xfd,0x00,0xfc
};
#endif
