/*
Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 -1 - 2*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int a,b,c,d,e;
	float promedio;

	printf("ingrese primer numero:\n");
	scanf("%d",&a);

	printf("ingrese segundo numero:\n");
	scanf("%d",&b);

	printf("ingrese tercer numero:\n");
	scanf("%d",&c);

	printf("ingrese cuarto numero:\n");
	scanf("%d",&d);

	printf("ingrese quinto numero:\n");
	scanf("%d",&e);

	promedio = (a+b+c+d+e)/5;

	printf("el promedio de los 5 numeros son: %.2f" ,promedio);


	return 0;
}
