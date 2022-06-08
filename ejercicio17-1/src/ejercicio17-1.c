/*Alan abalde 1E
 ============================================================================
 Name        : ejercicio17-1.c
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
	int codigo;
	char desc[50];
}eProducto;

eProducto* prueba();

int main(void) {
	setbuf(stdin,NULL);

	eProducto *aux;
	eProducto * aux2;

	for(int i=0;i<5;i++){
		aux = prueba();
		printf("%d %s %p\n", aux->codigo, aux->desc,aux);
	}

	aux2 = prueba();
	printf("%d %s %p\n", aux2->codigo, aux2->desc,aux2);

	return 0;
}


eProducto * prueba(){

eProducto * miProducto = (eProducto*)malloc(sizeof(eProducto));
eProducto aux;

aux.codigo = 100;
strcpy(aux.desc, "mi descripcion");

miProducto = &aux;

return miProducto;
}
