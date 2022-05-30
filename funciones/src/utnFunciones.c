/*
 * utnFunciones.c
 *
 *  Created on: 15 may 2022
 *      Author: alan_
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** \brief ordena de menor a mayor
* \param indice del array que recorre para swappear
* \param len, la longitud del array
* \return int Return (-1) if Error - (0) if esta ordenado
*/

int ordenarArray(int pArray[], int len){
	int retorno = -1;
	int i;
	int aux;
	int estaOrdenado;

	if(pArray != NULL && len > 0){
		do{
			estaOrdenado = 0;
			for(i=0; i > len -1; i++){
				if(pArray[i] > pArray[i+1]){
					aux = pArray[i];
					pArray[i] = pArray[i + 1];
					pArray[i + 1] = aux;
					estaOrdenado = 0;
				}
			}
		}while(estaOrdenado == 0);
		retorno = 0;
	}
	return retorno;
}

/** \brief muestra un array de entero
* \param indice del array
* \param len, la longitud del array
* \return int Return (-1) if Error - (0) if esta ordenado
*/

int mostrarArrayInt(int array[], int len){
	int i=0;

	if(array!= NULL && len > 0){
		for(i = 0; i < len; i++){
			printf("%d", array[i]);
		}
	}
	return 0;
}

int mostrarArrayChar(char array[], int len){
	int i = 0;
	if(len > 0){
		while(array[i] != '\0'){
			printf("%c", array[i]);
			i++;
		}
	}
	return 0;
}


/// @brief pide un numero flotante, if esta mal da mensaje ERROR, tiene un minimo de reintentos y maximo;
///
/// @param pNumeroIngresado
/// @param mensaje
/// @param mensajeError
/// @param maximo
/// @param minimo
/// @param maximoDeReintentos
/// @return
void getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError, float minimo, int maximoDeReintentos){

    float auxNumeroIngresado;
    if(pNumeroIngresado != NULL &&  maximoDeReintentos>= 0){
        do{
            printf("%s \n", mensaje);
            scanf("%f" ,&auxNumeroIngresado);
            printf("\n");
            maximoDeReintentos--;

            if(auxNumeroIngresado >= minimo){
                        *pNumeroIngresado = auxNumeroIngresado;
                        printf("numeroIngresado: %.2f \n", auxNumeroIngresado);
                        break;
            }else{
                printf("%s", mensajeError);
            }

        }while(maximoDeReintentos > 0);
    }

    return;
}

/// @brief pide un numero entero, if esta mal da mensaje ERROR, tiene un minimo de reintentos y maximo;
///
/// @param pNumeroIngresado
/// @param mensaje
/// @param mensajeError
/// @param maximo
/// @param minimo
/// @param maximoDeReintentos
/// @return
void utn_GetInt(int * pNumeroIngresado,char * mensaje,char * mensajeError, int minimo, int maximoDeReintentos){

    int auxNumeroIngresado;
    if(pNumeroIngresado != NULL&& maximoDeReintentos>= 0){
        do{
            printf("%s \n", mensaje);
            scanf("%d", &auxNumeroIngresado);
            printf("\n");
            maximoDeReintentos--;

            if(auxNumeroIngresado >= minimo){
                        *pNumeroIngresado = auxNumeroIngresado;
                        break;
            }else{
                printf("%s", mensajeError);
            }

        }while(maximoDeReintentos > 0);

    }
    return;
}

/// @brief pide un numero, el descuento y devuelve resultado
///
/// @param pNumeroIngresado
/// @param descuento
/// @param resultado
/// @return
void getDiscount(float * pNumeroIngresado,float * descuento, float *resultado){
    float auxResultado;
    if(pNumeroIngresado != NULL && descuento > 0){
    	auxResultado = * pNumeroIngresado - (*pNumeroIngresado * *descuento);
    	* resultado = auxResultado;
    }

 return;
}

int inicializarAlumnos(alumno pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(int i =0; i < len; i++){
			pArray[i].isEmpty = 1;
			retorno = 0;
		}
	}
	return retorno;
};

int cargarAlumno(alumno pArray[], int len){
	int retorno = -1;
	int indexLibre;

	if(pArray != NULL && len > 0){

		indexLibre = buscarIndexPorEspacioLibre(pArray, len);
			if(indexLibre != -1){
				printf("Ingrese alumno: \n");
				fflush(stdin);
				scanf("%s", pArray[indexLibre].nombre);
				pArray[indexLibre].isEmpty = 0;
				retorno = 0;

		}
	}
	return retorno;
}

int bajaAlumno(alumno pArray[], int len, int idAlumno){
	int retorno = -1;
	int index;
	if(pArray != NULL && len > 0 && idAlumno > 0){
		index = buscarIndexPorId(pArray, len , idAlumno);
			if(index != -1){
				mostrarAlumno(pArray[index]);
				pArray[index].isEmpty = 1;
				retorno = 0;
		}
	}
	return retorno;
};


int sortPassengers(passenger *list, int lenght, int order) {
	int Return = -1;
	int isOrdered;
	passenger auxList;

	if(list != NULL && lenght > 0 && (order == 0 || order == 1)) {
	do {
		isOrdered = 1;
		lenght--;
		for(int i = 0; i < lenght; i++) {
			if(order == 1) {
				if(strcmp(list[i].lastName, list[i+1].lastName) > 0) {
					auxList = list[i];
					list[i] = list[i+1];
					list[i+1] = auxList;
					isOrdered = 0;
				}
				else if(strcmp(list[i].lastName, list[i+1].lastName) == 0 && list[i].typePassenger > list[i+1].typePassenger) {
					auxList = list[i];
					list[i] = list[i+1];
					list[i+1] = auxList;
					isOrdered = 0;
				}
			}

			if(order == 0) {
				if(strcmp(list[i].lastName, list[i+1].lastName) < 0) {
					auxList = list[i];
					list[i] = list[i+1];
					list[i+1] = auxList;
					isOrdered = 0;
				}
				else if(strcmp(list[i].lastName, list[i+1].lastName) == 0 && list[i].typePassenger < list[i+1].typePassenger) {
					auxList = list[i];
					list[i] = list[i+1];
					list[i+1] = auxList;
					isOrdered = 0;
				}
			}
		}
	} while(isOrdered == 0);
	Return = 0;
}

return Return;
}

int buscarIndexPorId(alumno pArray[], int len, int id){
	int retorno = -1;

	if(pArray != NULL && len > 0 && id > 0){
		for(int i = 0; i < len; i++){
			if(pArray[i].idAlumno == id && pArray[i].isEmpty == 0){
				retorno =i;
				break;
			}
		}
	}
	return retorno;
}


int modificarAlumno(alumno pArray[], int len, int idAlumno){
	int retorno = -1;
	int index;

	if(pArray != NULL && len > 0 && idAlumno > 0){
		index = buscarIndexPorId(pArray, len, idAlumno);
		if(index != -1){

			}
		}
		for(int i = 0; i < len; i++){
			if(pArray[i].idAlumno == idAlumno && pArray[i].isEmpty == 0){
		}
	}
};

int buscarIndexPorEspacioLibre(alumno pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(int i = 0; i < len; i++){
			if(pArray[i].isEmpty == 1){
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

void mostrarAlumno(alumno unAlumno){
	if(unAlumno.isEmpty == 0){
	printf("%d", unAlumno.edad);
	// todo lo que quiero mostrar

	}
}

int listarAlumno(alumno pArray[], int len){
	int retorno = -1;
	if(pArray != NULL && len > 0){
		for(int i = 0; i < len; i++){
		mostrarAlumno(pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}

int hayAlgoCargado(alumno pArray[], int len){
	int retorno = 0;

	if(pArray != NULL && len > 0){
		for(int i = 0; i < len; i++){
			if(pArray[i].isEmpty == 0){
				retorno = 1;
			}
		}
	}
	return retorno;
}

int incrementarIdAlumno(){
	static int idAlumno = 100;

	idAlumno++;

	return idAlumno;
}

int incrementarId(){
	static int idStatic = 100;
	idStatic++;

	return idStatic;
}

