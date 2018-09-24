#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "psinfo.h"


int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Error");
        return -1;
    }
    char *file = argv[1];
    logText(file);
    return 0;
}

/*
int main() {
  char filename[80];
  char line[201];
  int numLinea = 1;
  FILE *iF;
  printf("Ingrese el nombre del archivo: ");
  fflush(stdin);
  scanf("%[^\n]s",filename); // Formato para que la entrada pueda aceptar espacios
  iF = fopen(filename,"r");
  if (iF == NULL) {
    printf("Error al abrir el archivo %s\n", filename);
    exit(-1);
  }
  while(fgets(line, 201, iF)!=NULL) {
    printf("%-5d",numLinea++);
    printf("%s",line);
  }
  fclose(iF);
  exit(0);
}

*/
