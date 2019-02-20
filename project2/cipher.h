#ifndef CIPHER_H
#define CIPHER_H
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char encrypt(char ch, int key);
void processFile(FILE *fin, FILE *fout, int key);
void removeDup(char* input);
void initEncryptArr();
void initDecryptArr();

#endif //CIPHER_H
