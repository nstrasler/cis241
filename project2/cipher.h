#ifndef CIPHER_H
#define CIPHER_H
#include <stdio.h>

char encrypt(char ch, int key);
void processFile(FILE *fin, FILE *fout, int key);

#endif //CIPHER_H
