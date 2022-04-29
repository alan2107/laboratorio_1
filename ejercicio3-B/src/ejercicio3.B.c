/*ALAN ABALDE ejercicio 3B
 * b-Funciones
- Limpie la pantalla
- Asigne a las variables numero1 y numero2 los valores solicitados al usuario
- Valide los mismos entre 10 y 100
- Asigne a la variable operacion el valor solicitado al usuario
- Valide el mismo 's'-sumar, 'r'-restar
- Realice la operación de dichos valores a través de una función
- Muestre el resultado por pantalla
*/
#include <stdio.h>
#include <stdlib.h>

int realizarOperacion(int numeroUno, int numeroDos, char tipoDeOperacion);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	char operacion;
	int resultado;

	printf("Ingrese el primer numero, entre 10 y 100: ");
		     scanf("%d", &numero1);

	while(numero1 < 10 || numero1 > 100){
	printf("ERROR! Ingrese el primer numero entre 10 y 100: ");
		     scanf("%d", &numero1);
	}

    printf("Ingrese el segundo numero entre 10 y 100: ");
    scanf("%d", &numero2);

	while(numero2 < 10 || numero2 > 100){
	 printf("ERROR! Ingrese el segundo numero entre 10 y 100: ");
			     scanf("%d", &numero2);
	}

	printf("Ingrese tipo de operacion ('s'sumar,'r'restar):" );
				     fflush(stdin);
				     scanf("%c", &operacion);

	while(operacion != 's' && operacion != 'r'){
		printf("ERROR! Ingrese tipo de operacion ('s'sumar,'r'restar):" );
						     fflush(stdin);
						     scanf("%c", &operacion);
	}


	resultado = realizarOperacion(numero1,numero2,operacion);

	printf("El resultado de su operacion es: %d", resultado);

	return 0;
}

int realizarOperacion(int numeroUno, int numeroDos, char tipoDeOperacion){
	int resultado;
    if(tipoDeOperacion == 's'){
    		resultado = numeroUno + numeroDos;
    }else{
    	resultado = numeroUno - numeroDos;
    }
	return resultado;
}


