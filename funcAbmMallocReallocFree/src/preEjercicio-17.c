/*
 ============================================================================
 Name        : preEjercicio-17.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char descripcion[50];
	int id;
}eProducto;

eProducto* newProductoMalloc(int cantidadDeEspacioProducto);
int reallocProducto(eProducto* unProducto, int cantidadDeEspacioParaLimpiar);
int freeProducto(eProducto* unProducto);
int mostrarProductos(eProducto* productos, int size);
int cargarProducto(eProducto * producto);


int main(void){
	setbuf(stdout, NULL);
	eProducto* productos;
	int size = 2;

	productos = newProductoMalloc(size);

	if(productos != NULL){
		size = 5;
		if(reallocProducto(productos ,size) == 0){
			for(int i=0; i<size; i++){
				cargarProducto(&productos[i]);
			}
			printf("el realloc fue exitoso:\n");
			mostrarProductos(productos,size);
		}
	}
	return 0;
}

//          ABM CON MALLOC , REALLOC, FREE.
eProducto* newProductoMalloc(int cantidadDeEspacioProducto) {

	eProducto* unProducto = NULL;
	if(cantidadDeEspacioProducto > 0){
	unProducto = (eProducto*)malloc(sizeof(eProducto)*cantidadDeEspacioProducto);

	if(unProducto != NULL){
		unProducto->id = 0;
		strcpy(unProducto->descripcion," ");
	}
}
	return unProducto;
}

int reallocProducto(eProducto* unProducto, int cantidadDeEspacioParaLimpiar){
	eProducto * auxiliar;
	int retorno = -1;

	if(unProducto != NULL && cantidadDeEspacioParaLimpiar > 0){
		auxiliar = (eProducto*)realloc(unProducto, sizeof(eProducto)*cantidadDeEspacioParaLimpiar);
		if(auxiliar != NULL){
		unProducto = auxiliar;
		retorno = 0;
		}
	}
	return retorno;
}

int freeProducto(eProducto* unProducto){
	int retorno = -1;
	if(unProducto != NULL){
	free(unProducto);
	retorno = 0;
	}
	return retorno;
}

int mostrarProductos(eProducto* productos, int size){
 int retorno = -1;

 if(productos != NULL && size > 0){
	 for(int i= 0; i < size; i++){
		 printf("producto #%d: %d %s\n", i,  (productos+i)->id, (productos+i)->descripcion);
		 retorno = 0;
	 }
 }
return retorno;
}

int cargarProducto(eProducto * producto){
	int retorno = -1;

	if(producto != NULL){
		printf("ingrese id:\n");
		scanf("%d", &producto->id);
		//scanf("%d", &(*producto).id); ES IGUAL A PONER LO MISMO DE ARRIBA CON FLECHA;
		printf("ingrese descripcion \n:");
		fflush(stdin);
		scanf("%s", producto->descripcion);
		retorno = 0;
	}
return retorno;
}
