/*
 * lib.c
 *
 *  Created on: 26 may 2022
 *      Author: alan_
 */
#include <stdio.h>
#include "asociado.h"

int incrementarId(){
	static int idStatic = 100;
	idStatic++;

	return idStatic;
}

int inicializarAsociado(Asociado pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(int i =0; i < len; i++){
			pArray[i].isEmpty = 1;
			retorno = 0;
		}
	}
	return retorno;
}

int buscarIndexPorEspacioLibre(Asociado pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(int i = 0; i < len; i++){
			if(pArray[i].isEmpty == 1){
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int cargarAsociado(Asociado pArray[], int len){
	int retorno = -1;
	int indexLibre;

	if(pArray != NULL && len > 0){

		indexLibre = buscarIndexPorEspacioLibre(pArray, len);
			if(indexLibre != -1){
				printf("Ingrese nombre: \n");
				fflush(stdin);
				scanf("%s", pArray[indexLibre].nombre);

				printf("Ingrese apellido: \n");
				fflush(stdin);
				scanf("%s",pArray[indexLibre].apellido);
				printf("Ingrese DNI: \n");
				scanf("%d", &pArray[indexLibre].dni);
				printf("Ingrese Edad: \n");
				scanf("%d",&pArray[indexLibre].edad);
				pArray[indexLibre].idAsociado =incrementarId();
				pArray[indexLibre].isEmpty = 0;
				retorno = 0;

		}
	}
	return retorno;
}
void mostrarAsociado(Asociado unAsociado){
	if(unAsociado.isEmpty == 0){
	printf("%d %s %s %d %d", unAsociado.idAsociado, unAsociado.nombre, unAsociado.dni, unAsociado.edad);

	}
}
int listarAsociado(Asociado pArray[], int len){
	int retorno = -1;
	if(pArray != NULL && len > 0){
		for(int i = 0; i < len; i++){
		mostrarAsociado(pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}
