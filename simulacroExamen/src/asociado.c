/*
 * lib.c
 *
 *  Created on: 26 may 2022
 *      Author: alan_
 */
#include <stdio.h>
#include <stdlib.h>
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
	printf("%d %s %d %d", unAsociado.idAsociado, unAsociado.nombre, unAsociado.dni, unAsociado.edad);

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

int buscarIndexPorId(Asociado pArray[], int len, int id){
	int retorno = -1;

	if(pArray != NULL && len > 0 && id > 0){
		for(int i = 0; i < len; i++){
			if(pArray[i].idAsociado == id && pArray[i].isEmpty == 0){
				retorno =i;
				break;
			}
		}
	}
	return retorno;
}

int modificarAsociado(Asociado listaAsociados[], int len, int idAsociado){
	int retorno = -1;
	int index;

	if(listaAsociados != NULL && len > 0 && idAsociado > 0){
		index = buscarIndexPorId(listaAsociados, len, idAsociado);
		if(index != -1){
			mostrarAsociado(listaAsociados[index]);
			printf("cambiar el nombre:\n");
			fflush(stdin);
			scanf("%s", listaAsociados[index].nombre);
			retorno = 0;
			}
		}
	return retorno;
	}

int bajaAsociado(Asociado listaAsociados[], int len, int idAsociado){
	int retorno = -1;
	int index;

	if(listaAsociados != NULL && len > 0 && idAsociado > 0){
		index = buscarIndexPorId(listaAsociados, len, idAsociado);

			if(index != -1){
				printf("estas seguro?: \n");
				mostrarAsociado(listaAsociados[index]);
				listaAsociados[index].isEmpty = 1;
				retorno = 0;
		}
	}
	return retorno;
}

int buscarIndexPorIsEmpty(Asociado pArray[], int len){
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
int existeAsociadoPorId(Asociado pArray[], int len, int id){
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(int i=0; i<len; i++){
			if(pArray[i].isEmpty == 0 && id == pArray[i].idAsociado){

				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}



