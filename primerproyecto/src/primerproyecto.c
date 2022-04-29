
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdin, NULL);
	int edad;
	int alturaDeDireccion;
	float temperatura;

	printf("decime tu edad:");
	scanf("%d", &edad);

	printf("decime la altura del domicilio:");
	scanf("%d"&alturaDeDireccion);

	printf("ingrese temperatura");
	scanf("%f", &temperatura);

	printf("Su edad es: %d, /nSu altura de domicilio es: %d y su temperatura es: %.1f", edad, alturaDeDireccion, temperatura);

	printf("El valor de la variable temperatura es: %f", temperatura);
	return 0;
}
