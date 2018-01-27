/*
 * This file is part of RGBDS.
 *
 * Copyright (c) 1997-2018, Carsten Sorensen and RGBDS contributors.
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef RGBDS_ASM_CHARMAP_H
#define RGBDS_ASM_CHARMAP_H

#include <stdint.h>

#define MAXCHARMAPS	16384
#define CHARMAPLENGTH	16

struct Charmap {
	int32_t count;
	char input[MAXCHARMAPS][CHARMAPLENGTH + 1];
	uint16_t output[MAXCHARMAPS];
};

int32_t readUTF8Char(char *destination, char *source);
int32_t charmap_Add(char *input, uint16_t output);
int32_t charmap_Convert(char **input);

#endif /* RGBDS_ASM_CHARMAP_H */
