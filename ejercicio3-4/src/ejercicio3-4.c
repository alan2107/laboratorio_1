/*Alan Abalde
 Ejercicio 3-4:
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);
*/

#include <stdio.h>
#include <stdlib.h>

int sumar1(int primerNumero, int segundoNumero);
int sumar2(void);
void sumar3(int numero, int numero1);
void sumar4(void);

int main(void) {
setbuf(stdout, NULL);

//1)
//	int numero1;
//	int numero2;
//	int resultado;
//
//	printf("ingrese un numero");
//		scanf("%d",  &numero1);
//
//	printf("ingrese un numero");
//		scanf("%d", &numero2);
//
//		resultado = sumar1(numero1, numero2);
//		printf("su suma es: %d" , resultado);
//return 0;

//2)
//sumar2();

//3)
    int numero1;
	int numero2;


	printf("ingrese un numero:\n");
		scanf("%d",  &numero1);

	printf("ingrese un numero: \n");
		scanf("%d", &numero2);

		sumar3(numero1, numero2);

return 0;

//4)
// sumar4();
}

int sumar1(int primerNumero, int segundoNumero){

return primerNumero + segundoNumero;
}


int sumar2(void){

	int numero1;
	int numero2;
	int auxResultado;

	printf("ingrese un numero:");
		scanf("%d",&numero1);
	printf("ingrese otro numero:");
		scanf("%d",&numero2);

		auxResultado = numero1 + numero2;

		printf("el resultado es: %d", auxResultado);
		return 0;
}


void sumar3(int numero, int numero1){
	int auxNumero1;
	int auxNumero2;
	int resultado;

	auxNumero1 = numero;
	auxNumero2 = numero1;
	resultado = auxNumero1 + auxNumero2;

	printf("el resultado es: %d", resultado);
}


void sumar4(){

int Numero1, Numero2, Resultado;

    printf("ingrese un numero");
		scanf("%d",&Numero1);

	printf("ingrese otro numero");
		scanf("%d",&Numero2);

		Resultado = Numero1 + Numero2;
		printf("el resultado de la suma es: %d", Resultado);

}
