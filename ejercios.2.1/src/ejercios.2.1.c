/*
 ============================================================================
 Name        : 1.c
 Author      : alex zalazar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	setbuf(stdout,NULL);
	char letra;
	int contador = 0;
	int i;
	for(i = 0;i < 5;i = i + 1)
	{
		printf("ingrese una letra: ");
		fflush(stdin);
		scanf("%c",&letra);
		if(letra == 'p')
		{
			contador = contador + 1;
		}
	}
	printf("\nSe ingresaron: %d p minuculas",contador);

	return 0;
}
// ejercicio 2.3
/*int main(void)
{
	setbuf(stdout,NULL);
	int numeroDeCliente;
	char estadoCivil;
	int	edad;
	int temperatura;
	char genero;
	char seguir;
	int contador = 0;
	int flag = 0;
	int edadMasJoven = 0;
	int numeroDeClienteMinimo = 0;
	int contadorPersonas = 0;
	int precio;
	int contadorMayores = 0;
	int contadorMenores = 0;
	float precioConDescuento;
	do{
		do
		{
			printf("ingrese numero de cliente:");
			scanf("%d",&numeroDeCliente);
		}while(numeroDeCliente == 0);
		do{
			printf("\nEstado cibil('s' para soltero, 'c' para casado o 'v' viudo):");
			fflush(stdin);
			scanf("%c",&estadoCivil);
		}while(!(estadoCivil == 's' || estadoCivil == 'c' || estadoCivil == 'v'));
		do
		{
			printf("\nTemperatura:");
			scanf("%d",&temperatura);
		}while(!(temperatura > 34 && temperatura < 42));
		do
		{
			printf("\nGenero('f' para femenino, 'm' para masculino, 'o' para no binario):");
			fflush(stdin);
			scanf("%c",&genero);
		}while(!(genero == 'f' || genero == 'm' || genero == 'o'));
		do
		{
			printf("\nIngrese su edad:");
			scanf("%d",&edad);
		}while(!(edad > 0 && edad < 100));
		switch(estadoCivil)
		{
			case 'v':
				if(edad > 59)
				{
					contador = contador + 1;
				}
				break;
			case 's':
					if(genero == 'f')
					{
						if(flag == 0 || edad < edadMasJoven)
						{
							numeroDeClienteMinimo = numeroDeCliente;
							edadMasJoven = edad;
							flag = 1;
						}
					}
				break;
		}
		contadorPersonas = contadorPersonas + 1;
		if(edad > 59)
		{
			contadorMayores = contadorPersonas + 1;
		}
		else
		{
			contadorMenores = contadorMenores + 1;
		}


		do
		{


			printf("\nIngrese s si quiere seguir ingresando datos o n si no quiere: ");
			fflush(stdin);
			scanf("%c",&seguir);
		}while(!(seguir == 's' || seguir == 'n'));
	}while(seguir == 's');


	precio = contadorPersonas * 600;
		if(contadorMayores > contadorMenores)
	{
		precioConDescuento = (float)precio * 25 / 100;
		precioConDescuento = (float)precio - precioConDescuento;
		printf("\na) La cantidad de personas con estado viudo de más de 60 años: %d"
				"\nb) el número de cliente: %d y edad de la mujer soltera más joven: %d"
				"\nc) precio del viaje total sin descuento: %d"
				"\nd) descuento: %.2f",contador,numeroDeClienteMinimo,edadMasJoven,precio,precioConDescuento);
	}
		else
		{
			if(contadorMenores > contadorMayores)
			{
			printf(	"\na)La cantidad de personas con estado viudo de más de 60 años: %d"
					"\nb) el número de cliente: %d y edad de la mujer soltera más joven: %d,"
					"\nc) cuánto sale el viaje total sin descuento: %d",contador,numeroDeClienteMinimo,edadMasJoven,precio);
			}
		}
	return 0;
}*/
// ejercicio 2.2
/*int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	int flag = 0;
	int minimo;
	int pares = 0;
	int impares = 0;
	int parMayor;
	int positivos = 0;
	int negativos = 1;
	int flag2 = 0;


for(int i = 0;i < 10; i = i + 1 )
{
	printf("ingrese un numero: ");
	scanf("%d",&numero);
	if(flag == 0 || numero < minimo)
	{
		minimo = numero;
		flag = 1;
	}
	if(numero%2==0)
	{
		pares = pares + 1;
		if(flag2==0 || numero > parMayor)
		{
			parMayor = numero;
			flag2 = 1;
		}
	}
	else
	{
		impares = impares + 1;
	}
	if(numero > 0)
	{
		positivos = positivos + numero;
	}
	else
	{
		negativos = negativos * numero;

	}

}
if(negativos == 1)
{
	printf("\na. Cantidad de pares e impares: %d"
			"\nb. El menor número ingresado: %d"
			"\nc. De los pares el mayor número ingresado: %d"
			"\nd. Suma de los positivos: %d"
			"\ne. Producto de los negativos: ERROR NO SE INGRESARON NEGATIVOS",impares,minimo,parMayor,positivos);
}
else
{
	printf("\na. Cantidad de pares e impares: %d"
			"\nb. El menor número ingresado: %d"
			"\nc. De los pares el mayor número ingresado: %d"
			"\nd. Suma de los positivos: %d"
			"\ne. Producto de los negativos: %d",impares,minimo,parMayor,positivos,negativos);
}
	return 0;
}*/
// ejercicio 2.1
/*int main(void) {
	setbuf(stdout,NULL);
	int numero;
	float promedio = 0;
	for (int i = 0; i < 5 ; i = i + 1)
	{
		printf("ingrese un numero:");
		scanf("%d", &numero);
		while(numero == 0)
		{
			printf("ERROR, INGRESE UN NUMERO MAYOR A 0");
			scanf("%d",&numero);
		}
		promedio = promedio + numero;
	}
	promedio = promedio/ 5;
	printf("El promedio: %.2f", promedio);
	return EXIT_SUCCESS;
}*/
