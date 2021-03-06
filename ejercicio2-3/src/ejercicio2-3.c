/*Ejercicio 2-3:
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona debemos obtener los siguientes datos:
 n?mero de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, m?s de 17),
 temperatura corporal (validar por favor)
 y sexo ('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: el precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado "viudo" de m?s de 60 a?os.
 b) el n?mero de cliente y edad de la mujer soltera m?s joven.
 c) cu?nto sale el viaje total sin descuento.
 d) si hay m?s del 50% de los pasajeros que tiene m?s de 60 a?os , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
 */
#include <stdio.h>
#include <stdlib.h>

#define PASAJE 600
#define DESCUENTO 0.25

int main(void) {
	setbuf(stdout, NULL);

	int numeroDeCliente, edad, personaViuda,pasajerosConDescuento,max, min,
	contadorDePasajeros, personasMayorA60,personasMenorA60,flag;
	char estadoCivil, sexo,salir;
	float temperaturaCorporal, viajeTotalSinDescuento;

	personaViuda = 0;
	contadorDePasajeros = 0;
	personasMayorA60 = 0;
	flag = 1;
	personasMayorA60 = 0;
	personasMenorA60 = 0;

do{
	printf("ingrese numero de cliente:\n");
	scanf("%d",&numeroDeCliente);

	printf("ingrese su estado civil ('s' para soltero, 'c' para casado o 'v' viudo):\n");
	fflush(stdin);
	scanf("%c", &estadoCivil);

	while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v') {
		printf("ERROR, ingrese correctamente su estado civil ('s' para soltero, 'c' para casado o 'v' viudo):\n");
		fflush(stdin);
		scanf("%c", &estadoCivil);
	}

	printf("ingrese su edad:\n ");
	scanf("%d", &edad);

	while (edad <= 17) {
		printf("ud no puede viajar con esa edad, ud tiene que ser mayor de edad. porfavor ingrese su edad correctamente:\n");
		scanf("%d", &edad);
	}

	printf("ingrese temperatura corporal:\n");
	scanf("%f", &temperaturaCorporal);

	while (temperaturaCorporal > 38) {
		printf(
				"Ud tiene mas de 38 de temperatura y no podra viajar, por favor ingrese su temperatura:\n");
		scanf("%f", &temperaturaCorporal);
	}

	printf(
			"ingrese su sexo ('f' para femenino, 'm' para masculino, 'o' para no binario): \n");
	fflush(stdin);
	scanf("%c", &sexo);

	while (sexo != 'f' && sexo != 'm' && sexo != 'o') {
		printf("ERROR inserte su sexo correspondiente: \n");
		scanf("%c", &sexo);
	}
	//a) La cantidad de personas con estado "viudo" de m?s de 60 a?os.

	if (estadoCivil == 'v' && edad > 60) {
		personaViuda++;
	}

	//b) el n?mero de cliente y edad de la mujer soltera m?s joven.

	if(flag == 1 && sexo == 'f' && estadoCivil == 's'){
		max = edad;
		min = edad;
		flag = 0;
	}else {
		if(edad > max){
			max = edad;
		}if(edad < min){
			min = edad;
		}
	}
	//c) cu?nto sale el viaje total sin descuento.

	contadorDePasajeros++;
	viajeTotalSinDescuento = contadorDePasajeros * PASAJE;

	 printf("Desea salir (s/n)?:\n");
	 fflush(stdin);
	 scanf("%c",&salir);

} while(salir != 's');

//d) si hay m?s del 50% de los pasajeros que tiene m?s de 60 a?os , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

			if(edad >= 60){
				personasMayorA60++;
			}else{
				personasMenorA60++;
			}
			if( personasMayorA60 > personasMenorA60){

				pasajerosConDescuento = (PASAJE * DESCUENTO) - PASAJE;
			    printf("El precio final con descuento es de: $%d \n" ,pasajerosConDescuento);
			}

/*if (edad > 60) {
		 personasMayorA60++;
		if((( personasMayorA60 / contadorDePasajeros) * 100) > 50){
		pasajerosConDescuento = (PASAJE * DESCUENTO) - PASAJE;

		printf("El precio final con descuento es de: $%d \n" ,pasajerosConDescuento);
	}
}*/


	printf("la cantidad de persona con estado viudo son: %d \n" ,personaViuda);
	printf("el numero de cliente es %d y edad de la mujer soltera mas joven es: %d \n", numeroDeCliente, min);
	printf("el viaje total sin descuento sale :$%.2f \n" ,viajeTotalSinDescuento);



return 0;
}

