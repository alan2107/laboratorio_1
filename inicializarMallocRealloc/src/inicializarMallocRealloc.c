/*
 ============================================================================
 Name        : inicializarMallocRealloc.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nombre[40];
	float price;
	int codigo;
} eProducto;

eProducto* newProducto();
eProducto * newProductoParam(char * nombre, float price, int codigo);
int mostrarProducto(eProducto * pProduct);
void initDeVariosProductos(eProducto * arrayPProducto[], int len);


int main(void) {

	eProducto * pProductos[10];
	eProducto * pProducto;

	pProducto = newProductoParam("coca", 200, 1234);
	mostrarProducto(pProducto);

	return 0;
}

eProducto* newProducto() {
	eProducto *espacioEnMemoriaParaUneProducto;

	espacioEnMemoriaParaUneProducto = (eProducto*)malloc(sizeof(eProducto));

	if (espacioEnMemoriaParaUneProducto != NULL) {
		strcpy(espacioEnMemoriaParaUneProducto->nombre, "");
		espacioEnMemoriaParaUneProducto->price = 0;
		espacioEnMemoriaParaUneProducto->codigo = 0;
	}
	return espacioEnMemoriaParaUneProducto;
}

eProducto * newProductoParam(char * nombre, float price, int codigo){

	eProducto * puntProduct;

	puntProduct = newProducto();

	if(puntProduct != NULL){
		strcpy(puntProduct->nombre,nombre);
		puntProduct->price = price;
		puntProduct->codigo = codigo;
	}
	return puntProduct;
}

int mostrarProducto(eProducto * pProduct){
	int retorno = -1;

	if(pProduct != NULL){
		retorno = 0;
		printf("nombre: %s, price: %.2f, codigo: %d\n", pProduct->nombre, pProduct->price, pProduct->codigo);
	}
	return retorno;
}

// eProducto ** arrayPProducto = // eProducto * arrayPProducto[]

void initDeVariosProductos(eProducto * arrayPProducto[], int len){

	if(arrayPProducto != NULL && len > 0){
		for(int i=0; i<len; i++){
			*(arrayPProducto) = NULL;
		}
	}
}


