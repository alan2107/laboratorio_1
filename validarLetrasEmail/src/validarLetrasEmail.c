/*
 ============================================================================
 Name        : validarLetrasEmail
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int validarLetras(char cadena[]);
int validarLetrasFinal(char cadena[]);
int utn_getMail(char cadena[]);
int isMail(char cadena[]);

int main(void)
{
	setbuf(stdout, NULL);

	printf("%d", isMail("pepe@gmail.com"));

	return EXIT_SUCCESS;
}
int validarLetras(char cadena[])
{
	int retorno=0;
	int len = strlen(cadena);

	if(cadena!=NULL)
	{
		for(int i=0;i<len;i++)
		{
			if((cadena[i]>='A' && cadena[i]<='Z') || (cadena[i]>='a' && cadena[i]<='z'))
			{
				retorno=1;
			}
			else
			{
				retorno=0;
				break;
			}
		}
	}
	return retorno;
}
int validarLetrasFinal(char cadena[])
{
	int retorno=1;
	int i=0;
	if(cadena!=NULL)
	{
		while(cadena[i]!='\0')
		{
			if(cadena[i]<'A' || (cadena[i]>'Z' && cadena[i]<'a') || cadena[i]>'z')
			{
				retorno=0;
				break;
			}
			i++;
		}
	}

	return retorno;
}

/*int utn_getMail(char cadena[])
{
	int retorno;
	char auxiliar[256];

	if(cadena!=NULL)
	{
		//getString("Ingrese mail: ", auxiliar);

	}





	return retorno;
}*/
int isMail(char cadena[])
{
	int retorno=1;
	int i=0;
	int contadorArrobas=0;
	if(cadena!=NULL)
	{
		while(cadena[i]!='\0')
		{	//pepe@gmail.com
			//pepe@yahoo.com.ar
			if(cadena[i]=='@')
			{
				contadorArrobas++;
				if(contadorArrobas>1)
				{
					retorno=0;
					break;
				}
			}
			if((cadena[i]<'A' || cadena[i]>'Z') && (cadena[i]<'a' ||cadena[i]>'z')
					&& cadena[i]!='_' && cadena[i]!='-' && cadena[i]!='.' && cadena[i]!='@')
			{
				retorno=0;
				break;
			}
			i++;
		}
	}

	return retorno;
}
