/*
 ============================================================================
 Name        : programacion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"


int main(void) {
	setbuf(stdout,NULL);
	int resultado;
	//int numero1;
	//int numero2;
	resultado = sumar();
	printf("\n resultador de la suma %d", resultado);

	return 0;
}
