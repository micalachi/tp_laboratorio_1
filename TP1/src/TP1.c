/*
 ============================================================================
 Name        : TP1.c
 Author      : Lacivitta, Micaela Luján
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "sistema.h"
#include "micaela.h"

#define PRECIO_MAX 999999999

int main(void)
{
	int opcionIngresada;
	float kilometros;
	float precioLatam;
	float precioAerolineas;
	float latamDeb;
	float aerolineasDeb;
	float latamCred;
	float aerolineasCred;
	float latamBtc;
	float aerolineasBtc;
	float latamPrecioKm;
	float aerolineasPrecioKm;
	float difLatamAA;
	int flagOpcionUno;
	int flagOpcionDos;
	int flagOpcionTres;

	flagOpcionUno =0;
	flagOpcionDos=0;
	flagOpcionTres=0;

	setbuf(stdout,NULL);

	do
	{

		sis_imprimirMenu(kilometros, precioLatam, precioAerolineas);
		opcionIngresada = mi_pedirEntero(3, 1, 6);

		switch(opcionIngresada)
		{
			case 1:
				kilometros= sis_pedirKilometros();
				flagOpcionUno=1;
				break;
			case 2:
				printf("\nIngrese el precio para Latam");
				precioLatam= mi_pedirFloat(3, 1, PRECIO_MAX);
				printf("\nIngrese el precio para Aerolineas Argentinas");
				precioAerolineas= mi_pedirFloat(3, 1, PRECIO_MAX);
				flagOpcionDos= 1;

				break;
			case 3:
				if(flagOpcionUno== 1 && flagOpcionDos==1)
				{
					sis_calcularCostos(kilometros, precioLatam, precioAerolineas, &latamDeb, &aerolineasDeb,
								   &latamCred, &aerolineasCred, &latamBtc, &aerolineasBtc, &latamPrecioKm,
								   &aerolineasPrecioKm, &difLatamAA);
					flagOpcionTres=1;
				}
				else
				{
					printf("\nError, primero debe cargar todos los datos.");
				}

				break;
			case 4:
				if(flagOpcionTres==1)
				{
				sis_informarResultados(latamDeb, aerolineasDeb, latamCred, aerolineasCred, latamBtc, aerolineasBtc,
						               latamPrecioKm, aerolineasPrecioKm, difLatamAA);
				}
				else
				{
					printf("\nError, primero debe calcular los costos");
				}
				break;
			case 5:
				kilometros= 7090;
				precioLatam= 159339;
				precioAerolineas= 162965;

				sis_calcularCostos(kilometros, precioLatam, precioAerolineas, &latamDeb, &aerolineasDeb,
								   &latamCred, &aerolineasCred, &latamBtc, &aerolineasBtc, &latamPrecioKm,
								   &aerolineasPrecioKm, &difLatamAA);

				sis_imprimirCargaForzada(kilometros, precioLatam, precioAerolineas, latamDeb, aerolineasDeb, latamCred, aerolineasCred,
						                 latamBtc, aerolineasBtc, latamPrecioKm, aerolineasPrecioKm, difLatamAA);
				break;


		}


	}while(opcionIngresada!=6);

	printf("Gracias por haber utilizado la aplicación.");

	return EXIT_SUCCESS;
}
