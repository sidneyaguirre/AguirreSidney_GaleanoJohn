#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cont = 0;
  srand(time(NULL)); // Inicializacion del generador
  char filename[80];
  int tam;
  char ch;
  FILE *inputFile;
  printf("Ingrese el nombre de la cadena de ADN a generar: ");
  scanf("%[^\n]s",filename); // Formato para que la entrada pueda aceptar espacios
  inputFile = fopen(filename,"r");
  if (inputFile == NULL) {
    printf("Error al abrir el archivo %s\n", filename);
    exit(-1);
  }
  do {
    ch = getc(inputFile);
    if(ch == "\n"){
      cont++;
    }else{
        continue;
    };
  } while(ch != EOF);
  cont--;
  printf("%d", cont);
  printf("\n");
  fclose(inputFile);
  exit(0);
}
