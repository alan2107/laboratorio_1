/*
 * informes.c
 *
 *  Created on: 31 may 2022
 *      Author: alan_
 */
#include <stdio.h>
#include <stdlib.h>
#include "asociado.h"
#include "llamada.h"

#define LEN_ASOCIADOS 6
#define LEN_LLAMADA 6

int buscarIdQueMasSeRepite(Llamada pArrayLlamada[],int lenLlamada, int idAsociado){

	int retorno = -1;
	int contador = 0;

	if(pArrayLlamada != NULL && lenLlamada > 0){
		for(int i = 0; i < lenLlamada ; i++){
			if(pArrayLlamada[i].idAsociado == idAsociado){
				contador++;
			}
		}
		retorno = contador;
	}
	return retorno;
}

int informarMaryorCantidadDeLlamado(Llamada pArrayLlamada[],int lenLlamada, Asociado pArrayAsociado[], int lenAsociado){


	int retorno = -1;
	int contadorMaximoActual = 0;
	int contador = 0;
	int auxiliarId;

	if(pArrayLlamada != NULL && pArrayAsociado != NULL && lenLlamada > 0 && lenAsociado > 0)

		for(int i = 0; i < lenLlamada; i++){
			contador = buscarIdQueMasSeRepite(pArrayLlamada, lenLlamada, pArrayAsociado[i].idAsociado);
			if(contador > contadorMaximoActual){
				auxiliarId = pArrayAsociado[i].idAsociado;
				contadorMaximoActual = contador;
			}
		}

	return retorno;
}
