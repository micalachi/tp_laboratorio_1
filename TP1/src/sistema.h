/*
 * sistema.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Micaela
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_

/*
 * Permite imprimir el menú.
 * float km recibe los kilometros para imprimir en el punto uno.
 * float precioLatam recibe el precio para imprimir en el punto dos.
 * float precioAerolineas recibe el precio para imprimir en el punto dos.
 */
void sis_imprimirMenu(float km, float precioLatam, float precioAerolineas );



/*
 * Le pide al usuario que ingrese una cantidad de kilómetros y los devuelve por retorno.
 * return devuelve los kilometros obtenidos del usuario.
 */
float sis_pedirKilometros();

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
						float* pDifLatamAA);

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
							float aerolineasBtc, float latamPrecioKm, float aerolineasPrecioKm, float difLatamAA);

/* Permite imprimir los resultados sin ingresar ninguna opción previamente.
 * Imprime todos los resultados al momento de apretar el botón, ingresando los datos: kilómetros, precio Latam y precio Aerolineas Argentinas.
 */
void sis_imprimirCargaForzada(float km, float precioLatam, float precioAerolineas, float latamDeb, float aerolineasDeb,
							  float latamCred,float aerolineasCred, float latamBtc, float aerolineasBtc, float latamPrecioKm,
							  float aerolineasPrecioKm,float difLatamAA);


#endif /* SISTEMA_H_ */
