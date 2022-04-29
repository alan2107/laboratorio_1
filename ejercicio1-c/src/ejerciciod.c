/*
d-Operadores Logicos
Aplicando el concepto de Operadores Lógicos con valores booleanos en el condicional:
Solicitar un número al usuario
Informar si el mismo es par o impar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	printf("ingrese un numero:\n");
	scanf("%d", &numero);

	if(numero %2 == 0){
		printf("Su numero es Par");
	}else {
		printf("su numero es Impar");
	}

	return EXIT_SUCCESS;
}
