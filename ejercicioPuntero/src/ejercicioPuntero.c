#include <stdio.h>
#include <stdlib.h>

float calculaPromedioDeDosEnteros(int primerEntero, int segundoEntero);
int calculaPromedioDeDosEnterosPorReferencia(int primerEntero,
		int segundoEntero, float *punteroAlPromedio);
int pedirDatoNumericoInt();

int main(void) {
	setbuf(stdout, NULL);
	int notaUno = 2;
	int notaDos;
	float promedioDeNota;
	float promedioDeNotaPorPuntero = 40;

//	notaUno = pedirDatoNumericoInt();
//	notaDos = pedirDatoNumericoInt();

	printf("Tu promedio es antes de la funcion: %.2f\n",
			promedioDeNotaPorPuntero);
	printf("notaUno antes de la funcion es: %d\n", notaUno);
	printf("La direccion de memoria en el main es: %p",
			&promedioDeNotaPorPuntero);
	calculaPromedioDeDosEnterosPorReferencia(notaUno, 3,
			&promedioDeNotaPorPuntero);
	printf("notaUno es: %d\n", notaUno);
	printf("Tu promedio es: %.2f", promedioDeNotaPorPuntero);
	//promedioDeNota = calculaPromedioDeDosEnteros(notaUno,notaDos);
//	if(promedioDeNotaPorPuntero <= 4){
//		printf("Te fue mal");
//	}else{
//		printf("Tu promedio es: %.2f", promedioDeNota);
//	}
	return 0;
}

float calculaPromedioDeDosEnteros(int primerEntero, int segundoEntero) {
	float promedioEnteros;
	promedioEnteros = (primerEntero + segundoEntero) / (float) 2;
	return promedioEnteros;
}

int calculaPromedioDeDosEnterosPorReferencia(int primerEntero,
		int segundoEntero, float *punteroAlPromedio) {
	float auxPromedioEnteros;
	printf("La direccion de memoria en la funcion es: %p", punteroAlPromedio);
	primerEntero = 25;
	auxPromedioEnteros = (primerEntero + segundoEntero) / (float) 2;

	*punteroAlPromedio = auxPromedioEnteros;
	return 0;
}

int pedirDatoNumericoInt() {
	int datoPedido;
	printf("Ingrese un numero: ");
	scanf("%d", &datoPedido);
	return datoPedido;
}
