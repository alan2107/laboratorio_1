#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int opcionMenu;
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
				printf("1. Alta ASOCIADO: \n");
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
