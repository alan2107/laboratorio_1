#include "asociado.h"
#ifndef LLAMADA_H_
#define LLAMADA_H_

#define PENDIENTE 1
#define CUMPLIDO 2
#define INFARTO 1
#define ACV 2
#define GRIPE 3

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
int cargarLlamada(Llamada pArray[], int len, Asociado pArrayAsociado[], int lenAsociado);
int buscarIndexPorIsEmptyLlamadas(Llamada pArray[], int len);







#endif /* LLAMADA_H_ */
