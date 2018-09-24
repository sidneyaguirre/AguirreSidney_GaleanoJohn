#ifndef MINIWORD_H_
#define MINIWORD_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cantiCar = 0;
int cantiLin = 0;
int cantiPal = 0;
int cantiEsp = 0;
int cantiMay = 0;
int cantiMin = 0;
int cantiDig = 0;

int caracteres(FILE *inputFile);
int lineas(FILE *inputFile);
int palabras(FILE *inputFile);
int espacios(FILE *inputFile);
int mayusculas(FILE *inputFile);
int minusculas(FILE *inputFile);
int digitos(FILE *inputFile);

#endif
