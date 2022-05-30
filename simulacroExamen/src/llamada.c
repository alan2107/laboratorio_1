/*
 * llamada.c
 *
 *  Created on: 29 may 2022
 *      Author: alan_
 */

#include <stdio.h>
#include "llamada.h"


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


