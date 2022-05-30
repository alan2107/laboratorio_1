/*
 ============================================================================
 Name     alan   : clase16-4.c
 4-Dada la siguiente estructura: int legajo; char nombre[20]; int edad;
Realizar una función que cargue un array de 3 estudiantes.
Recibe un puntero al array de estudiantes, lo carga y retorna 0 si funcionó correctamente -1 mal.
Una vez cargados los estudiantes mostrar el array cargado
Utilizar aritmetica de punteros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int legajo;
	char nombre[20];
	int edad;
}Estudiante;

int main(void) {
	setbuf(stdout, NULL);

	return EXIT_SUCCESS;
}

int cargaEstudiantes(Estudiante arrayEstudiante[], int len){
	int retorno = -1;
	int i;

	int entero = 2;
	int *punteroAEntero = &entero;

	i = *punteroAEntero;

	if(arrayEstudiante != NULL && len >0){
		retorno = 0;
		for(i=0; i<len; i++){
			printf("Ingrese N legajo:\n");

			scanf("%d", *(arrayEstudiante+i)->legajo); //Accedo a través del puntero
			printf("Ingrese la edad:\n");
			scanf("%d", &(*(arrayEstudiante+i)).edad); // Convierto con los parentesis en una dir de memoria
		}



	}


	return retorno;
}

