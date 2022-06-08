/*
 * lib.h
 *
 *  Created on: 26 may 2022
 *      Author: alan_
 */

#ifndef ASOCIADO_H_
#define ASOCIADO_H_
#define PENDIENTE 1
#define CUMPLIDO 2
#define INFARTO 1
#define ACV 2
#define GRIPE 3

typedef struct {
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
int buscarIndexPorId(Asociado pArray[], int len, int id);
int modificarAsociado(Asociado pArray[], int len, int idAsociado);
int buscarIndexPorIsEmpty(Asociado pArray[], int len);
int existeAsociadoPorId(Asociado pArray[], int len, int id);
int bajaAsociado(Asociado listaAsociados[], int len, int idAsociado);
#endif /* ASOCIADO_H_ */
