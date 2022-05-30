#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "asociado.h"
#include "llamada.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcionMenu;
	Asociado asociados[2];
	Llamada llamadas[2];
	inicializarAsociado(asociados, 2);
	inicializarLlamada(llamadas ,2);
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
			if(!cargarAsociado(asociados, 2)){
				printf("OK\n");
			}
			else{
				printf("NO OK\n");
			}
			listarAsociado(asociados, 2);
			break;
		case 2:
			printf("2. MODIFICAR ASOCIADO: \n");
			break;
		case 3:
			printf("3. BAJA ASOCIADO: \n");
			break;
		case 4:
			printf("4. NUEVA LLAMADA");
			break;
		case 5:
			printf("5. ASIGNAR AMBULANCIA: \n");
			break;
		case 6:
			printf("6. INFORMAR: \n");
			break;
		}
}while(opcionMenu != 7);
		return 0;
}
