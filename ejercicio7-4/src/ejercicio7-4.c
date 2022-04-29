/*
Ejercicio 7-4: Hacer un programa para ingresar hasta 100 nombres. Debe contar con el siguiente menú:
1- Ingresar nuevo nombre (no se aceptan nombres repetidos, informar si ocurre)
2- listar todos
3- Ordenar alfabeticamente
4- Borrar nombre. Se ingresa el nombre y si se encuentra, se elimina.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ManejoArrays.h"
#include "IngresoDeDatos.h"

#define NOMBRE_LEN 256
#define CANTIDAD_NOMBRES 100

int main(void) {
	setbuf(stdout, NULL);

	char nombres[CANTIDAD_NOMBRES][NOMBRE_LEN];
	char nombreIngresado[NOMBRE_LEN];
	int opcionMenu;
	int validacionRetorno;
	int index = 0;
	int i;

	inicializarMatrizchars(nombres, CANTIDAD_NOMBRES);



	do{

			printf("---------------------------MENU PRINCIPAL---------------------------\n");
			printf("1- Ingresar nuevo nombre\n");
			printf("2- listar todos\n");
			printf("3- Ordenar alfabeticamente\n");
			printf("4- Borrar nombre.\n");
			printf("5- Salir\n");


			validacionRetorno = getInt(&opcionMenu, "Por favor seleccione una opcion:\n",
			"La opcion ingresada es invalida. Por favor intente nuevamente:\n", 1, 5, 3);

			if (validacionRetorno == 0){
				switch(opcionMenu){
				case 1:
					if(buscarEspacioLibreMatriz(nombres, CANTIDAD_NOMBRES, &index)==0 &&
							getString ("Por favor, ingrese un nombre\n", nombreIngresado, NOMBRE_LEN) == 0){
						strcpy(nombres[index], nombreIngresado);
					}
					break;

				case 2:
					for(i=0; i<CANTIDAD_NOMBRES; i++){
						validacionRetorno = mostrarArrayChar(nombres[i], CANTIDAD_NOMBRES);
					}

					break;
				}
			}


		}while(opcionMenu != 6);



	return EXIT_SUCCESS;
}
