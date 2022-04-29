/*
 * utnEntrada.h
 *
 *  Created on: 20 abr 2022
 *      Author: alan_
 */

#ifndef UTNENTRADA_H_
#define UTNENTRADA_H_
#include <stdio.h>
#include <stdlib.h>

void utn_GetInt(int * pNumeroIngresado,char * mensaje,char * mensajeError, int minimo, int maximoDeReintentos);
void getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError, float minimo, int maximoDeReintentos);

#endif /* UTNENTRADA_H_ */
