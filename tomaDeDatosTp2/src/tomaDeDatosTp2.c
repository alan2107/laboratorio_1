
#include <stdio.h>
#include <stdlib.h>

int myGets(char* cadena, int longitud){
	int retorno = -1;
	char bufferString[4]; // ************

	if(cadena != NULL && longitud > 0){
		fpurge(stdin);
		if(fgets(bufferString, sizeof(bufferString),stdin) != NULL){
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n'){
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\0';
			}
			if(strnlen(bufferString,sizeof(bufferString)) <= longitud){
				strncpy(cadena,bufferString,longitud);
				retorno = 0;
			}
		}
	}
	return retorno;
}
