/*
 ============================================================================
 Name        : 3.c
 Author      : alex zalazar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	int numeroDos;
	int resultado;
	printf("ingrese un numero:");
	scanf("%d",&numero);
	printf("ingrese segundo numero");
	scanf("%d",&numeroDos);
	resultado = sumar1(numero,numeroDos);
	resultado = sumar2();
	sumar3(numero,numeroDos);
	sumar4();
	printf("%d",resultado);
	return 0;
}
/*int main(void)
{
	setbuf(stdout,NULL);
	int resultado;
	resultado = pedir();
	if(resultado > 0 && resultado < 40)
	{
		printf("Numero ingresado: %d",resultado);
	}
	else
	{
		printf("ERROR,el numero no esta dentro de este rango.");
	}
	return 0;
}*/
// Ejercicio3.2
/*int main(void)
{
	setbuf(stdout,NULL);
	int resultado;
	resultado = numeroPar();
	printf("¿El numero es par? %d",resultado);
	return 0;
}*/
//EJERCICIO 3.1
/*int main(void) {
	setbuf(stdout,NULL);
	recibir();
	return EXIT_SUCCESS;
}*/

