#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); // limpia la consola y permite mostrar mensajes

	float sueldo;

	printf("Ingrese su sueldo:\n");
	scanf("%f" ,&sueldo);/* le doy la direccion de memoria para guardar */
	sueldo = sueldo*0.10 +sueldo;
	printf("\nsu sueldo con aumento es: %.2f",sueldo);
	return EXIT_SUCCESS;
}
