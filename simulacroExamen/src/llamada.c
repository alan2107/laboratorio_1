/*
 * llamada.c
 *
 *  Created on: 29 may 2022
 *      Author: alan_
 */

#include <stdio.h>
#include <stdlib.h>
#include "llamada.h"
#include "asociado.h"

#define PENDIENTE 1

int inicializarLlamada(Llamada pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(int i =0; i < len; i++){
			pArray[i].isEmpty = 1;
			retorno = 0;
		}
	}
	return retorno;
}

int buscarIndexPorIsEmptyLlamadas(Llamada pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(int i=0; i<len; i++){
			if(pArray[i].isEmpty == 1){
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int cargarLlamada(Llamada pArray[], int len, Asociado pArrayAsociado[], int lenAsociado){
	int retorno = -1;
	int auxId;
	int indexLibre;

	if(pArray != NULL && len > 0){

		indexLibre = buscarIndexPorIsEmptyLlamadas(pArray, len);
			if(indexLibre != -1){
				printf("Ingrese Asociado: \n");
				scanf("%d", &auxId);

				if(existeAsociadoPorId(pArrayAsociado, lenAsociado, auxId) == 0){

				printf("Ingrese Motivo: \n");
				scanf("%d",&pArray[indexLibre].motivo);

				pArray[indexLibre].idAsociado = incrementarId();
				pArray[indexLibre].isEmpty = 0;
				pArray[indexLibre].estado = PENDIENTE;
				}else{
					printf("NO EXISTE EL ID INGRESADO: \n");
				}

				retorno = 0;
		}
	}
	return retorno;
}
/*
int modificarLlamada(Llamada listaLlamadas[], int len, int idLlamada){
	int retorno = -1;
	int index;

	if(listaLlamadas != NULL && len > 0 && idLlamada > 0){
		index = buscarIndexPorId(listaLlamadas, len, idLlamada);
		if(index != -1){
			mostrarAsociado(listaAsociado[index]);
			printf("cambiar el nombre");
			flush(stdin);
			scanf("%s", listaLlamadas[index].idLlamada);
			retorno = 0;
			}
		}
	return retorno;
	}
*/

