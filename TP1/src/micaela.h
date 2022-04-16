/*
 * micaela.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Micaela
 */

#ifndef MICAELA_H_
#define MICAELA_H_

/*
 * Permite pedir un n�mero dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cu�l dispone el usuario.
 * int min recibe el m�nimo del rango.
 * int max recibe el m�ximo del rango.
 * return retorno devuelve el n�mero obtenido.
 *                devuelve el min-1, si ocurri� un error.
 */
int mi_pedirEntero(int intentos, int min, int max);



/*
 * Permite pedir un n�mero dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cu�l dispone el usuario.
 * float min recibe el m�nimo del rango.
 * float max recibe el m�ximo del rango.
 * return retorno devuelve el n�mero obtenido.
 *                devuelve el min-1, si ocurri� un error.
 */
float mi_pedirFloat(int intentos, float min, float max);






#endif /* MICAELA_H_ */

