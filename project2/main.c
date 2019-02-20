#include "cipher.h"




int main(int argc, char *argv[]){
  FILE *fin, *fout;
  char ch;
  char str[] = "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdf";
  fin = fopen(argv[3], "r");
	fout = fopen(argv[4], "w");

  if (fin ==  NULL || fout == NULL) {
		printf("File could not be opened\n");
		exit(1);
	}

  //removeDup(str);
  removeDup(str);
  printf("%s  \n", str);

  int n = 0;
	while ( fscanf(fin, "%c", &ch) != EOF ){
		fprintf(fout, "%c", ch);
		n++;
	}

  fclose(fin);
	fclose(fout);
}
