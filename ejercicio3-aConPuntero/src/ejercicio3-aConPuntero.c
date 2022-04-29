/*
 a-Funciones
 - Limpie la pantalla
 - Asigne a la variable numero1 un valor solicitado al usuario
 - Valide el mismo entre 10 y 100
 - Realice un descuento del 5% a dicho valor a través de una función llamada realizarDescuento()
 - Muestre el resultado por pantalla
 */

#include <stdio.h>
#include <stdlib.h>

int realizarDescuento(int numero, float *resultado);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	float numeroFinal;

	printf("ingrese numero entre 10 y 100");
	scanf("%d", &numero1);

	while (numero1 < 10 || numero1 > 100) {
		printf("Error , ingrese numero entre 10 y 100");
		scanf("%d", &numero1);
	}

	realizarDescuento(numero1, &numeroFinal);

	printf("su numero con descuento es: %.2f", numeroFinal);

	return 0;
}
int realizarDescuento(int numero, float *resultado) {
	int descuento = 5;
	float numeroConDescuento;
	float auxNumeroFinal;

	numeroConDescuento = (float) (numero * descuento) / 100;
	auxNumeroFinal = numero - numeroConDescuento;

	*resultado = auxNumeroFinal;
	return 0;
}
