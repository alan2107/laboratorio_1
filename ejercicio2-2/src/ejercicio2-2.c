/*
 Ingresar 10 números enteros, distintos de cero. Mostrar:Cantidad de pares e impares.El menor número ingresado.
 De los pares el mayor número ingresado.Suma de los positivos.Producto de los negativos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i, numero, impares, pares,min,max,flag,acumuladorPositivo,acumuladorProductoNegativo;
	pares = 0;
	impares = 0;
	flag = 0;
	acumuladorPositivo = 0;
	acumuladorProductoNegativo = 1;

	for (i = 1; i <= 10; i++) {
		printf("Introduzca un numero entero %d: ", i);
		scanf("%d", &numero);
		if(flag == 0 && numero % 2 == 0){
			max = numero;
			min = numero;
			flag = 1;
		}
		if (numero % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
		if(numero > max && numero % 2 == 0){
			max = numero;
		}else if(numero < min && numero % 2 == 0){
			min = numero;
		}
		if(numero > 0){
			acumuladorPositivo += numero;
		}
		if(numero < 0){
			acumuladorProductoNegativo *= numero;
		}
	}



	printf("\n   Ha introducido %d numero(s) par(es) y %d impar(es).", pares,
			impares);
	printf("\n el menor numero par ingresado es: %d" ,min);
	printf("\n el mayor numero par ingresado es: %d" ,max);
	printf("\n la suma de los positivos es: %d" ,acumuladorPositivo);
	printf("\n el producto de los negativos es: %d" ,acumuladorProductoNegativo);

	return 0;
}
