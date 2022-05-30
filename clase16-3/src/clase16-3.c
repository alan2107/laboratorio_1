/*
 ============================================================================
 Name   alan     : clase16-3.c

3-Dada la siguiente estructura: int legajo; char nombre[20]; int edad;
Realizar una función que cargue un array de 3 estudiantes.
Recibe un entero.
Retorna el estudiante dado de alta y por parámetro 0 si funcionó correctamente -1 mal.
Una vez devuelto el estudiante cargarlo en una posición del array.
Al final mostrar el array cargado
Utilizar aritmetica de punteros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int legajo;
	char nombre[20];
	int edad;

}Estudiante;

Estudiante cargaEstudiantes(int* retorno);

int main(void)
{
	setbuf(stdout,NULL);
	int retorno;
	Estudiante estudiantes[3];

	for(int i=0;i<3;i++)
	{
		estudiantes[i]=cargaEstudiantes(&retorno);
		if(!retorno)
		{
			printf("Todo ok\n");
		}
	}

	for(int i=0;i<3;i++)
	{
		printf("nombre: %s\n",estudiantes[i].nombre);
	}

	return EXIT_SUCCESS;
}

Estudiante cargaEstudiantes(int* retorno)
{
	int auxRetorno;
	auxRetorno=-1;
	Estudiante auxEstudiante;
	if(retorno != NULL)
	{
		printf("Ingrese legajo:\n");
		scanf("%d",&auxEstudiante.legajo);
		printf("Ingrese Nombre:\n");
		fflush(stdin);
		scanf("%s",auxEstudiante.nombre);
		printf("Ingrese Edad:\n");
		scanf("%d",&auxEstudiante.edad);
		auxRetorno=0;
	}
	*retorno=auxRetorno;
	return auxEstudiante;
}
