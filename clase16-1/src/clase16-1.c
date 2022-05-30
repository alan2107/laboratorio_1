/*
 ============================================================================
 Name :  alan   clase16-1.c
 1-Realizar una función que reciba un puntero a char y dos char.
La función deberá reemplazar en la cadena cada ocurrencia del primer carácter recibido,
por el segundo. Retornando la cantidad de reemplazos o -1 en caso de error.
Utilizar aritmetica de punteros

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int reemplazarLetra(char * pCaracter, char caracterBusco, char caracterReemplaza);

int main()
{
    char cadena[] = {'h','a','a','a','\0'};
    char primeraLetra = 'a';
    char segundaLetra = 'b';
    printf("la cantidad de reemplazos es: %d\nla cadena es: %s\n",reemplazarLetra(cadena,primeraLetra,segundaLetra), cadena);
    return 0;
}

int reemplazarLetra(char * pCaracter, char caracterBusco, char caracterReemplaza)
{
    int retorno = -1;
    int i = 0;
    if(pCaracter != NULL)
    {
        retorno = 0;
        while(*(pCaracter+i) != '\0')
        {
            if(*(pCaracter+i) == caracterBusco)
            {
                *(pCaracter+i) = caracterReemplaza;
                retorno++;
            }
        i++;
        }
    }
    return retorno;
}

