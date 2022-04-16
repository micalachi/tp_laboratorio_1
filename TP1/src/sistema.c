/*
 * sistema.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Micaela
 */

#include <stdio.h>
#include <stdlib.h>
#include "micaela.h"


/*
 * Permite imprimir el menú.
 * float km recibe los kilometros para imprimir en el punto uno.
 * float precioLatam recibe el precio para imprimir en el punto dos.
 * float precioAerolineas recibe el precio para imprimir en el punto dos.
 */
void sis_imprimirMenu(float km, float precioLatam, float precioAerolineas )
{
	printf("\n");
	printf("\n*********************************************************");
	printf("\n1.Ingresar Kilómetros: ( km= %.2f)",km);
	printf("\n2.Ingresar Precio de Vuelos:(Aerolíneas=%.2f, Latam=%.2f)", precioAerolineas, precioLatam);
	printf("\n3.Calcular todos los costos:");
	printf("\n4.Informar Resultados:");
	printf("\n5.Carga forzada de datos:");
	printf("\n6. Salir: ");
	printf("\n*********************************************************");
	printf("\n");
}

/*
 * Le pide al usuario que ingrese una cantidad de kilómetros y los devuelve por retorno.
 * return devuelve los kilometros obtenidos del usuario.
 */
float sis_pedirKilometros()
{
	float kilometros;
	float retorno =-1;

	printf("\nIngrese la cantidad de kilometros: ");

	kilometros= mi_pedirFloat(2, 1, 99999999);
	if(kilometros != 0)
	{
		retorno= kilometros;
	}
	return retorno;
}

/*
 * Permite calcular todos los costos de todas las operaciones.
 * float km recibe los kilómetros para realizar el calculo.
 * float precioLatam recibe el costo del viaje por la aerolinea Latam.
 * float precioAerolineas recibe el costo del viaje por la aerolinea Aerolineas Argentinas.
 * float* pLatamDeb recibe el puntero a una variable, para escribir el resultado de Latam con débito.
 * float* pAerolineasDeb recibe el puntero a una variable, para escribir el resultado de Aerolineas Argentinas con débito.
 * float* pLatamCred recibe el puntero a una variable, para escribir el resultado de Latam con crédito.
 * float* pAerolineasCred recibe el puntero a una variable, para escribir el resultado de Aerolineas Argentinas con crédito.
 * float* pLatamBtc recibe el puntero a una variable, para escribir el resultado de Latam con BITCOIN.
 * float* pAerolineasBtc recibe el puntero a una variable, para escribir el resultado de Aerolineas Argentinas con BITCOIN.
 * float* pLatamPrecioKm recibe el puntero a una variable, para escribir el resultado del precio por kilómetro de Latam.
 * float* pAerolineasPrecioKm recibe el puntero a una variable, para escribir el resultado del precio por kilómetro de Aerolineas Argentinas.
 * float* pDifLatamAA recibe el puntero a una variable, para escribir el resultado de la resta Latam menos Aerolineas Argentianas
 */
void sis_calcularCostos(float km, float precioLatam, float precioAerolineas, float* pLatamDeb, float* pAerolineasDeb, float* pLatamCred,
						float* pAerolineasCred, float* pLatamBtc, float* pAerolineasBtc, float* pLatamPrecioKm, float* pAerolineasPrecioKm,
						float* pDifLatamAA)
{
	*pLatamDeb = precioLatam - (precioLatam * 0.1);
	*pAerolineasDeb= precioAerolineas - (precioAerolineas * 0.1);
	*pLatamCred = precioLatam + (precioLatam * 0.25);
	*pAerolineasCred= precioAerolineas + (precioAerolineas * 0.25);
	*pLatamBtc = precioLatam / 4606954.55;
	*pAerolineasBtc = precioAerolineas / 4606954.55;
	*pLatamPrecioKm = precioLatam / km;
	*pAerolineasPrecioKm = precioAerolineas / km;
	*pDifLatamAA = precioLatam - precioAerolineas;

	printf("\nCostos calculados.");
	printf("\n");
}


/* Permite imprimir todos los resultados por consola.
 *float latamDeb recibe el valor del precio para latamDeb.
 *float latamCred recibe el valor del precio para latamCred.
 *float latamBtc recibe el valor del precio para latamBtc.
 *float latamPrecioKm recibe el valor del precio por kilómetro de latamPrecioKm.
 *float aerolineasDeb recibe el valor del precio para aerolineasDeb.
 *float aerolineasCred recibe el valor del precio para aerolineasCred.
 *float aerolineasBtc recibe el valor del precio para aerolineasBtc.
 *float aerolineasPrecioKm recibe el valor del precio por kilómetro de aerolineasPrecioKm.
 *float difLatamAA recibe el valor de la resta de precioLatam menos precioAerolineas.
 */
void sis_informarResultados(float latamDeb, float aerolineasDeb, float latamCred, float aerolineasCred, float latamBtc,
							float aerolineasBtc, float latamPrecioKm, float aerolineasPrecioKm, float difLatamAA)
{
	printf("\nLatam:");
	printf("\na) Precio con tarjeta de débito:$ %.2f",latamDeb);
	printf("\nb) Precio con tarjeta de crédito:$ %.2f",latamCred);
	printf("\nc) Precio pagando con bitcoin :%f",latamBtc);
	printf("\nd) Precio unitario:$ %.2f", latamPrecioKm);
	printf("\nAerolíneas:");
	printf("\na)Precio con tarjeta de débito:$ %.2f",aerolineasDeb);
	printf("\nb) Precio con tarjeta de crédito:$ %.2f", aerolineasCred);
	printf("\nc) Precio pagando con bitcoin :%f", aerolineasBtc);
	printf("\nd) Precio unitario:$ %.2f", aerolineasPrecioKm);
	printf("\nLa diferencia de precio es :$ %.2f", difLatamAA);
	printf("\n");
}


/* Permite imprimir los resultados sin ingresar ninguna opción previamente.
 * Imprime todos los resultados al momento de apretar el botón, ingresando los datos: kilómetros, precio Latam y precio Aerolineas Argentinas.
 */
void sis_imprimirCargaForzada(float km, float precioLatam, float precioAerolineas, float latamDeb, float aerolineasDeb,
							  float latamCred,float aerolineasCred, float latamBtc, float aerolineasBtc, float latamPrecioKm,
							  float aerolineasPrecioKm,float difLatamAA)
{
	printf("\n");
	printf("KMs Ingresados:%.2f\n",km);

	printf("\nPrecio Aerolineas: $%.2f",precioAerolineas);
	printf("\na) Precio con tarjeta de débito:$%.2f",aerolineasDeb);
	printf("\nb) Precio con tarjeta de crédito: $%.2f",aerolineasCred);
	printf("\nc) Precio pagando con bitcoin: %.2f BTC",aerolineasBtc);
	printf("\nd) Mostrar precio unitario: $%.2f",aerolineasPrecioKm);
	printf("\n");
	printf("\nPrecio Latam: $%.2f\n",precioLatam);
	printf("\na) Precio con tarjeta de débito:$%.2f ",latamDeb);
	printf("\nb) Precio con tarjeta de crédito: $%.2f",latamCred);
	printf("\nc) Precio pagando con bitcoin: %.2f BTC",latamBtc);
	printf("\nd) Mostrar precio unitario: $%.2f",latamPrecioKm);
	printf("\n");
	printf("\nLa diferencia de precio es: $%.2f",difLatamAA);
}


