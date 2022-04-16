/*
 * micaela.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Micaela
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Permite pedir un número dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cuál dispone el usuario.
 * int min recibe el mínimo del rango.
 * int max recibe el máximo del rango.
 * return retorno devuelve el número obtenido.
 *                devuelve el min-1, si ocurrió un error.
 */
int mi_pedirEntero(int intentos, int min, int max)
{
	int retorno=min -1;
	int numeroIngresado;

	if(intentos>0 && min<max)
	{
		do
		{
			intentos--;

			printf("\n\nIngrese un número entero: ");
			setbuf(stdout,NULL);
			scanf("%d",&numeroIngresado);
			if(numeroIngresado <= max && numeroIngresado >= min)
			{
				retorno= numeroIngresado;
				break;
			}
			else
			{
				printf("\nError, ingrese un número dentro del rango indicado:\n");
			}

		}while(intentos>0);

	}
	else
	{
		printf("\nLos argumentos ingresados son incorrectos.");
	}

	return retorno;
}


/*
 * Permite pedir un número dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cuál dispone el usuario.
 * float min recibe el mínimo del rango.
 * float max recibe el máximo del rango.
 * return retorno devuelve el número obtenido.
 *                devuelve el min-1, si ocurrió un error.
 */
float mi_pedirFloat(int intentos, float min, float max)
{
	float retorno=min -1;
	float numeroIngresado;

	if(intentos>0 && min<max)
	{
		do
		{
			printf("\n\nIngrese un número: ");
			setbuf(stdout,NULL);
			scanf("%f",&numeroIngresado);
			if(numeroIngresado <= max && numeroIngresado >= min)
			{
				retorno= numeroIngresado;
				break;
			}
			else
			{
				intentos--;
				printf("intentos: %d",intentos);
				printf("\nError, ingrese un número dentro del rango indicado:\n");
			}

		}while(intentos>0);

	}
	else
	{
		printf("\nLos argumentos ingresados son incorrectos.");
	}

	return retorno;
}


