#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ManejoArrays.h"
#include "IngresoDeDatos.h"


int getInt(int * pNumeroIngresado, char * mensaje, char * mensajeError, int min, int max, int reintentos){

	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && max >= min && reintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			reintentos--;

			if(auxNumeroIngresado >= min && auxNumeroIngresado <= max){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(reintentos > 0);
	}

	return retorno;
}

int getFloat(float * pNumeroIngresado, char * mensaje, char * mensajeError, int min, int max, int reintentos){

	float auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && max >= min && reintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%f", &auxNumeroIngresado);
			reintentos--;

			if(auxNumeroIngresado >= min && auxNumeroIngresado <= max){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(reintentos > 0);
	}

	return retorno;
}

int getString (char mensaje[], char cadena[], int len){
	int retorno = -1;


	if(mensaje != NULL && cadena != NULL && len != 0){
		printf("%s", mensaje);
		fflush(stdin);
		if (fgets(cadena, len, stdin)){
			//cadena[strcspn(cadena, '\n')] = '\0';
			cadena[strlen(cadena)-1] = '\0';
		}
		retorno = 0;
	}


	return retorno;
}
