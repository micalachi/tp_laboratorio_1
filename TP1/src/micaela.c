/*
 * micaela.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Micaela
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Permite pedir un n�mero dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cu�l dispone el usuario.
 * int min recibe el m�nimo del rango.
 * int max recibe el m�ximo del rango.
 * return retorno devuelve el n�mero obtenido.
 *                devuelve el min-1, si ocurri� un error.
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

			printf("\n\nIngrese un n�mero entero: ");
			setbuf(stdout,NULL);
			scanf("%d",&numeroIngresado);
			if(numeroIngresado <= max && numeroIngresado >= min)
			{
				retorno= numeroIngresado;
				break;
			}
			else
			{
				printf("\nError, ingrese un n�mero dentro del rango indicado:\n");
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
 * Permite pedir un n�mero dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cu�l dispone el usuario.
 * float min recibe el m�nimo del rango.
 * float max recibe el m�ximo del rango.
 * return retorno devuelve el n�mero obtenido.
 *                devuelve el min-1, si ocurri� un error.
 */
float mi_pedirFloat(int intentos, float min, float max)
{
	float retorno=min -1;
	float numeroIngresado;

	if(intentos>0 && min<max)
	{
		do
		{
			printf("\n\nIngrese un n�mero: ");
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
				printf("\nError, ingrese un n�mero dentro del rango indicado:\n");
			}

		}while(intentos>0);

	}
	else
	{
		printf("\nLos argumentos ingresados son incorrectos.");
	}

	return retorno;
}


