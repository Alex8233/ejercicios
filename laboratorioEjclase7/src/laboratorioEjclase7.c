/*
 ============================================================================
 Name        : laboratorioEjclase7.c
 Author      : alex zalazar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stringh.h"
#include <string.h>

#define TAM 20

//int motrarLongitud(char nombre[]);
//void tomarValor(char nombre[],char mensaje[30]);
int main(void) {
	setbuf(stdout,NULL);
	char nombre[TAM];
	int retorno;
	tomarValor(nombre,"Ingrese su nombre:");
	retorno = motrarLongitud(nombre);
	printf("Longitud del nombre: %d",retorno);
	chequearNumero(nombre,"Tiene un numero",TAM);
}
