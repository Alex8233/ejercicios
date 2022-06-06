/*
 ============================================================================
 Name        : 4.c
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
	int gradosF;
	int gradosC;
	int calculoC;
	int calculoF;
	gradosC = pedirC();
	gradosF = pedirF();

	calculos(&calculoC,&calculoF,gradosC,gradosF);
	printf("\nLos %d°C a °F es: %d°F"
			"\nLos %d°F a °F es: %d°C",gradosC,calculoF,gradosF,calculoC);

	return 0;

}
/*int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int i;

	int factorial = 1;
	numero = pedir();
	for(i = 1; i <= numero; i = i +1)
	{
		factorial = factorial * i;
	}
	printf("La factorial de %d es: %d",numero,factorial);
	return EXIT_SUCCESS;
}*/
