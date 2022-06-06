/*
 * ejercicio.c
 *
 *  Created on: 29 abr. 2022
 *      Author: fatim
 */


#include <stdio.h>
#include <stdlib.h>
int chequear(int numeros[],int indice,int numero);
/*void pedir(int numero[])
{
	for(int i = 0; i < 5;i = i +1)
	{
		printf("\ningrese un numero:");
		scanf("%d",&numero[i]);
	}
}
int sumar(int numero[],int *acomulador)
{

	for(int i = 0;i<5;i = i+1)
	{
		*acomulador = *acomulador + numero[i];
	}
	return 0;
}*/
//ejercicio 2
int pedirNumero(int numero[],int* positivos,int* negativos,int* suma,int* mayorImpar)
{
	int flag= 0;

	for(int i= 0;i < 10;i = i +1)
	{
		printf("ingrese un numero para la posicion %d:",i);
		scanf("%d",&numero[i]);
		while(numero[i]<= -1000 && numero[i]>=1000)
		{
			printf("\nError, ingrese un numero(-1000 a 1000)");
			scanf("%d",&numero[i]);

		}
		if(numero[i]>=0 )
					{
						*positivos = *positivos + 1;

					}

					else
					{
						*negativos = *negativos + 1;
					}
					if(numero[i]%2==0)
					{
						*suma = numero[i]+ *suma;
					}
					else
					{
						if(flag ==0 || numero[i] > *mayorImpar)
						{
							*mayorImpar= numero[i];
							flag = 1;
						}

					}
	}
	return 0;
}
int mostrar(int numero[])
{
	int aux;
	int contador;
	int array[5];

	for(int i= 0;i < 10;i = i +1)
	{
		printf("numeros ingresados: %d ",numero[i]);
	}
	for(int i= 0;i < 10;i = i +1)
	{
					if(numero[i]%2==0)
			{


				printf("\nNumeros pares ingresados: %d\n ",numero[i]);
			}
	}

	for(int i= 0;i < 10;i = i +1)
	{
		if(numero[i]%2==0)
		{

		}
		else
		{
			printf("Numeros impares ingresados: %d\n",numero[i]);
		}
	}

	for(int i = 0;i < 10-1;i++)
	{
		contador = 0;

		for(int j=i+1;j< 10;j++)
		{
			if(numero[i] == numero[j])
			{
				contador ++;

				if(contador == 1 && chequear(array,i,numero[i]) ==0)
				{
					array[i]=numero[i];
					printf("Numeros que se repiten: %d\t",numero[i]);
				}
			}
		}
	}

	for(int i = 0;i < 9; i = i +1)
	{
		if(numero[i]>= 0)
		{

			for(int j=i+1;j< 10;j = j +1)
			{
				if(numero[j]>= 0)
				{
					if(numero[i]>numero[j])
					{
						aux= numero[i];
						numero[i]= numero[j];
						numero[j]= aux;
					}

				}

			}
		}

	}
for(int i = 0;i < 10; i = i +1)
{
	if(numero[i]>=0)
	{
		printf("\nnumero crecientes: %d",numero[i]);
	}
}


	for(int i = 0;i < 9; i = i +1)
	{
		if(numero[i]< 0)
		{

			for(int j=i+1;j< 10;j = j +1)
			{
				if(numero[j]< 0)
				{
					if(numero[i]<numero[j])
					{
						aux= numero[i];
						numero[i]= numero[j];
						numero[j]= aux;
					}
				}

			}
		}
	}
for(int i = 0;i < 10; i = i +1)
{
	if(numero[i]< 0){
		printf("\nnumero decrecientes: %d",numero[i]);
	}

}


		return 0;
}
int chequear(int numeros[],int indice,int numero)
{
	int respuesta;
	respuesta =0;
	if(numeros !=NULL)
	{
		for(int i=0;i<indice;i++)
		{
			if(numeros[i]==numero)
			{
				respuesta = 1;
			}
		}
	}
	return respuesta;
}
//ejercicio 3
/*int funcionP3(int numero[])
{
	int numeroAnterior[10];
	int numeros;
	for(int i=0;i<10;i++)
	{
		switch(i)
		{
			default:
			numero[i]=0;
			break;
		}
	}
	for(int i=0;i<10;i++)
	{

		 numeroAnterior[i]= numeros;
		for(int j = 0;j<10-1;j++)
		{
			for(int y= j+1;y<10;y++)
			{
				while(numeroAnterior[j] == numeroAnterior[y])
				{
					numeros = rand() % 11;
					numeros = rand() % (9+1);
				}
			}
		}
		numeros = rand() % 11;
		numeros = rand() % (9+1);

		printf("numero:%d\t",numero[numeros]);
		scanf("%d",numero[numeros]);

	}
	return 0;
}*/
