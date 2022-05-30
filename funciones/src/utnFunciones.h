/*
 * utnFunciones.h
 *
 *  Created on: 15 may 2022
 *      Author: alan_
 */

#ifndef UTNFUNCIONES_H_
#define UTNFUNCIONES_H_

typedef struct {
	char nombre[125];
	int idAlumno;
	int isEmpty;
	int edad;
}alumno;

typedef struct {
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
}passenger;


void getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError, float minimo, int maximoDeReintentos);
void utn_GetInt(int * pNumeroIngresado,char * mensaje,char * mensajeError, int minimo, int maximoDeReintentos);
void getDiscount(float * pNumeroIngresado,float * descuento, float *resultado);
int ordenarArray(int pArray[], int len);
int mostrarArrayInt(int array[], int len);
int inicializarAlumnos(alumno pArray[], int len);
int cargarAlumno(alumno pArray[], int len);
int bajaAlumno(alumno pArray[], int len, int idAlumno);
int sortPassengers(passenger *list, int lenght, int order);
int buscarIndexPorEspacioLibre(alumno pArray[], int len);
int mostrarAlumno(alumno unAlumno);

#endif /* UTNFUNCIONES_H_ */
