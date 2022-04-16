/*
 * micaela.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Micaela
 */

#ifndef MICAELA_H_
#define MICAELA_H_

/*
 * Permite pedir un número dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cuál dispone el usuario.
 * int min recibe el mínimo del rango.
 * int max recibe el máximo del rango.
 * return retorno devuelve el número obtenido.
 *                devuelve el min-1, si ocurrió un error.
 */
int mi_pedirEntero(int intentos, int min, int max);



/*
 * Permite pedir un número dentro de un rango recibido por los argumentos.
 * int intentos recibe la cantidad de intentos de la cuál dispone el usuario.
 * float min recibe el mínimo del rango.
 * float max recibe el máximo del rango.
 * return retorno devuelve el número obtenido.
 *                devuelve el min-1, si ocurrió un error.
 */
float mi_pedirFloat(int intentos, float min, float max);






#endif /* MICAELA_H_ */

