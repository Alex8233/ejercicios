/*
 ============================================================================
 Name        : ejercicio5.c
 Author      : alex zalazar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
/*int main(void)
{
	setbuf(stdout,NULL);
	int numero[5];
	int acomulador = 0;
	pedir(numero);
	sumar(numero,&acomulador);

	printf("la suma es: %d",acomulador);
	return 0;
}*/
//ejercicio 2

int main(void)
{
	setbuf(stdout,NULL);
	int numero[10];
	int acumuladorPositivo =0;
	int acumuladorNegativo = 0;
	int sumatoria=0;
	int mayorImpar;

	pedirNumero(numero,&acumuladorPositivo,&acumuladorNegativo,&sumatoria,&mayorImpar);
	printf("\nCantidad de numeros negativos: %d",acumuladorNegativo);
	printf("\nCantidad de numeros positivos: %d",acumuladorPositivo);
	printf("\nLa sumatoria de numeros pares: %d",sumatoria);
	printf("\nMayor impar: %d\n",mayorImpar);
	mostrar(numero);



	return 0;
}
//ejercicio 3
//Realizar un programa que permita el ingreso de 10 números enteros distintos de cero. La carga
//deberá ser aleatoria (todos los elementos se inicializan en cero por default). Determinar el
//promedio de los positivos, y del menor de los negativos la suma de los antecesores (Según la recta
//numérica de los reales, hasta llegar a cero).
/*int main(void)
{
	setbuf(stdout,NULL);
	int numero[10];

	funcionP3(numero);
}*/
/*
int main (void)
{
	int numero = 1234;
	char cadena[20];
	itoa(numero,cadena,10);
	printf("%s",cadena);
}*/
