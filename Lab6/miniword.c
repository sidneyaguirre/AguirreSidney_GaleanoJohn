#include "miniword.h"

//contar número de caracteres de un archivo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int caracteres(FILE *inputFile){
  int cont = 0;
  srand(time(NULL)); // Inicializacion del generador
  char filename[80];
  char ch;
  inputFile = fopen(filename,"r");
  if (inputFile == NULL) {
    printf("Error al abrir el archivo %s\n", filename);
    exit(-1);
  }
  do {
    ch = getc(inputFile);
    cont++;
  } while(ch != EOF);
  cont--;
  printf("%s %d","caracteres: " cont);
  printf("\n");
  fclose(inputFile);
  return cont;
  exit(0);
}


//contar número de lineas de un archivo
