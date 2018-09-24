#include "psinfo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void logText(char *file)
{
  char line[201];
  int numLinea = 0;
  FILE *iF;
  iF = fopen(file, "r");
  if (iF == NULL)
  {
    printf("Error al abrir el archivo \n");
    exit(-1);
  }
  while (fgets(line, 201, iF) != NULL)
  {
    numLinea++;
    /* printf("%-5d", numLinea++);
    printf("%s", line); */

    switch(numLinea){
      case 1:
        printf("%s", line);
      break;
      case 3:
        printf("%s", line);
      break;
      case 26:
        printf("%s", line);
      break;
      case 27:
        printf("%s", line);
      break;
      case 28:
        printf("%s", line);
      break;
      case 54:
        printf("%s", line);
      break;
      case 55:
        printf("%s", line);
      break;
    }
  }
  fclose(iF);
  exit(0);
}
