#ifndef RGBDS_ASM_CHARMAP_H
#define RGBDS_ASM_CHARMAP_H

#define MAXCHARMAPS	8192
#define CHARMAPLENGTH	8

struct Charmap {
	int count;
	char input[MAXCHARMAPS][CHARMAPLENGTH + 1];
	UWORD output[MAXCHARMAPS];
	//char output[MAXCHARMAPS];
	//char output2[MAXCHARMAPS];
	//char isUWORD[MAXCHARMAPS];
};

int readUTF8Char(char *destination, char *source);
void charmap_Sort();
int charmap_Add(char *input, UBYTE output);
int charmap_Add_UWORD(char *input, UWORD output);
int charmap_Convert(char **input);

#endif
