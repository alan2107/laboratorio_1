#include <stdio.h>
#include <stdlib.h>

#define LIMITE 5

int main(void) {
    setbuf(stdout, NULL);

    int numero;
    int i;
    int numeroMayor;
    int numeroMenor;

    for(i = 0; i < LIMITE; i++){
        printf("Ingrese un numero:");
        scanf("%d", &numero);

        if(i == 0 || numero < numeroMenor){
            numeroMenor = numero;
        }
        if(i == 0 || numero > numeroMayor){
            numeroMayor = numero;
        }
    }

    printf("El numero mayor es %d, El numero menor es %d."
            , numeroMayor, numeroMenor);

    return 0;
}
