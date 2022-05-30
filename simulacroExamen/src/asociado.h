/*
 * lib.h
 *
 *  Created on: 26 may 2022
 *      Author: alan_
 */

#ifndef ASOCIADO_H_
#define ASOCIADO_H_

typedef struct{
	int idAsociado;
	char nombre[125];
	int dni;
	char apellido[125];
	int edad;
	int isEmpty;
} Asociado;

int incrementarId();
int inicializarAsociado(Asociado pArray[], int len);
int buscarIndexPorEspacioLibre(Asociado pArray[], int len);
int cargarAsociado(Asociado pArray[], int len);
void mostrarAsociado(Asociado unAsociado);
int listarAsociado(Asociado pArray[], int len);
#endif /* ASOCIADO_H_ */
