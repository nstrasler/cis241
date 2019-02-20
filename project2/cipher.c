#include "cipher.h"


char encrypt(char ch, int k){


}


void processFile(FILE *fin, FILE *fout, int key){


}

void removeDup(char* input){
  int i,j,k;
  for(i = 0;input[i] != '\0'; i++)
    for(j = i+1; input[j] != '\0'; j++)
      if(input[j] == input[i]){
        i--; //check for more than 2 of the same character
        for(k = j; input[k] != '\0'; k++)
          input[k] = input[k+1];
      }
}

void initEncryptArr(){


}

void initDecryptArr(){


}
