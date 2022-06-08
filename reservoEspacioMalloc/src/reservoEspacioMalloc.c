/*
 ============================================================================
 Name        : reservoEspacioMalloc.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* newEntero(int len);
int inicializarEnteros(int *arrayEntero, int len);
int mostrarEnteros(int *arrayEntero, int len);
int cargarEnteros(int *arrayEntero, int len);
int redimencionarEspacio(int *arrayEntero, int len);
int cargarUnEntero(int *pEntero);

int main(void) {
	setbuf(stdout, NULL);
	int *arrayEntero;
	int len = 4;
	int respuesta;

	arrayEntero = newEntero(len);
	if (inicializarEnteros(arrayEntero, len) == 0) {
		cargarEnteros(arrayEntero, len);
		mostrarEnteros(arrayEntero, len);
		printf("desear ingresar un numero mas 1. si / 2. no\n");
		scanf("%d", &respuesta);
		if (respuesta == 1) {
			len++;
			redimencionarEspacio(arrayEntero, len);
			//cargarUnEntero(&arrayEntero[len-1]);
			cargarUnEntero(arrayEntero+(len-1));
			mostrarEnteros(arrayEntero, len);
		}
	}

	return 0;
}

int* newEntero(int len) {

	int *arrayNuevo;

	if (len > 0) {
		arrayNuevo = (int*) malloc(sizeof(int) * len);
	}
	return arrayNuevo;
}

int inicializarEnteros(int *arrayEntero, int len) {
	int retorno = -1;

	if (arrayEntero != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			*(arrayEntero + i) = 0;
			retorno = 0;
		}
	}
	return retorno;
}

int mostrarEnteros(int *arrayEntero, int len) {
	int retorno = -1;

	if (arrayEntero != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			printf("los numeros son: %d\n", *(arrayEntero + i));
			retorno = 0;
		}
	}
	return retorno;
}

int cargarEnteros(int *arrayEntero, int len) {
	int retorno = -1;

	if (arrayEntero != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			printf("ingrese un numero: \n");
			scanf("%d", (arrayEntero + i));
			retorno = 0;
		}
	}
	return retorno;
}

int redimencionarEspacio(int *arrayEntero, int len) {

	int retorno = -1;
	int *auxArray = NULL;

	if (arrayEntero != NULL && len > 0) {
		arrayEntero = (int*) realloc(arrayEntero, sizeof(int) * len);
		if (auxArray != NULL) {
			*arrayEntero = *auxArray;
			retorno = 0;
		}
	}
	return retorno;
}

int cargarUnEntero(int *pEntero) {
	int retorno = -1;

	if (pEntero != NULL) {
		printf("ingrese un numero: \n");
		scanf("%d", pEntero);
		retorno = 0;
	}
	return retorno;
}
