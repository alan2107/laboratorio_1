/*
 * llamada.h
 *
 *  Created on: 29 may 2022
 *      Author: alan_
 */
#ifndef LLAMADA_H_
#define LLAMADA_H_

typedef struct{
	int idLlamada;
	int estado[20];
	int motivo[20];
	int idAsociado;
	int idAmbulancia;
	float timpoInsumido;
	int isEmpty;
} Llamada;


int inicializarLlamada(Llamada pArray[], int len);






#endif /* LLAMADA_H_ */
