#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "asociado.h"
#include "llamada.h"
#include "informes.h"

#define PENDIENTE 1
#define CUMPLIDO 2
#define INFARTO 1
#define ACV 2
#define GRIPE 3
#define LEN_ASOCIADOS 6
#define LEN_LLAMADA 6
int main(void) {
	setbuf(stdout, NULL);

	int opcionMenu;
	int idIngresado;
	int indexAsociados;
	char auxiliar[50];

	Asociado asociados[LEN_ASOCIADOS] = {{1001, "JUAN", 43434545, "CARLOS", 29, 0},
										 {1002, "ROBERTO", 32324545, "MIGUEL", 34, 0},
										 {1003, "ALBERTO", 22724545, "RAUL", 24, 0},
										 {1004, "ALAN", 32389545, "SIPINS", 22, 0},
										 {1005, "ALEJANDRO", 42365545, "BRANDAN", 26, 0},
										 {1006, "DYLAN", 42365355, "BARBIERI", 54, 0}};

	Llamada llamadas[LEN_LLAMADA] = {{2001, CUMPLIDO, GRIPE, 1001, 0, 0, 0},
			 	 	 	 	 	 	 {2002, CUMPLIDO, ACV, 1003, 0, 0, 0},
									 {2003, PENDIENTE, INFARTO, 1002, 0, 0, 0},
									 {2004, CUMPLIDO, GRIPE, 1004, 0, 0, 0},
									 {2005, PENDIENTE, INFARTO, 1005, 0, 0, 0},
									 {2006, PENDIENTE, GRIPE, 1002, 0, 0, 0}};


	//inicializarAsociado(asociados, 2);
	//inicializarLlamada(llamadas ,2);

	do{

		printf("**************Menu Principal*************\n\n");
		printf("1. ALTA DEL ASOCIADO\n");
		printf("2. MODIFICAR ASOCIADO\n");
		printf("3. BAJA DEL ASOCIADO\n");
		printf("4. NUEVA LLAMADA \n");
		printf("5. ASIGNAR AMBULANCIA \n");
		printf("6. INFORMAR \n");
		printf("7. SALIR \n");
		printf("elija la opcion correspondiente:\n");
		scanf("%d",&opcionMenu);

		switch(opcionMenu){
		case 1:
			if(!cargarAsociado(asociados, LEN_ASOCIADOS)){
				printf("OK\n");
			}
			else{
				printf("NO OK\n");
			}
			listarAsociado(asociados, LEN_ASOCIADOS);
			break;
		case 2:
			if(listarAsociado(asociados, LEN_ASOCIADOS) == 0){
				printf("ingrese el numero id del asociado que quiere modificar: \n");
				scanf("%d", &idIngresado);
				modificarAsociado(asociados, LEN_ASOCIADOS, idIngresado);
				listarAsociado(asociados,LEN_ASOCIADOS);
			}else{
				printf("todavia no cargo asociado \n");
			}
			break;
		case 3:
			if(bajaAsociado(asociados ,LEN_ASOCIADOS, idIngresado) == 0){
				printf("ingrese el numero de id del asociado que quiere dar de baja: \n");
				scanf("%d", &idIngresado);
				bajaAsociado(asociados , LEN_ASOCIADOS ,idIngresado);
			}
			break;
		case 4:
		 cargarLlamada(llamadas, LEN_LLAMADA, asociados , LEN_ASOCIADOS);
			break;
	case 5:
		for(int i=0; i<LEN_LLAMADA; i++){
			indexAsociados	= buscarIndexPorId(asociados, LEN_ASOCIADOS, llamadas[i].idAsociado);
			if(llamadas[i].isEmpty == 0){
				//Buscar por id asociado, el id llamada
				switch(llamadas[i].estado){
				case PENDIENTE:
					strcpy(auxiliar, "PENDIENTE");
					break;
				case CUMPLIDO:
					strcpy(auxiliar, "CUMPLIDO");
					break;
				}
				switch(llamadas[i].motivo){
				case INFARTO:
					printf("%4d %15s %15s %15s\n",llamadas[i].idLlamada, auxiliar, "INFARTO", asociados[indexAsociados].nombre);
					break;
				case ACV:
					printf("%4d %15s %15s %15s\n",llamadas[i].idLlamada, auxiliar, "ACV", asociados[indexAsociados].nombre);
					break;
				case GRIPE:
					printf("%4d %15s %15s %15s\n",llamadas[i].idLlamada, auxiliar, "GRIPE", asociados[indexAsociados].nombre);
					break;
				}
			}

		}
			break;
		case 6:
			printf("6. INFORMAR: \n");
			informarMaryorCantidadDeLlamado(llamadas,LEN_LLAMADA, asociados, LEN_ASOCIADOS);
			break;
		}
}while(opcionMenu != 7);
		return 0;
}
