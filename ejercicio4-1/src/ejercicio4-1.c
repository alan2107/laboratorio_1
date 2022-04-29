/*
 1. Se desea hacer un programa que permita manejar una caja con ingreso y egreso de dinero. Para ello se debe hacer un menú con las siguientes opciones:
--> Saldo actual: nn <--
1) Saldo inicial: permitirá la carga del saldo inicial
2) Ingresar dinero: deberá pedirle al usuario la cantidad e incrementar el saldo
3) Egreso de dinero: deberá pedirle al usuario la cantidad y decrementar el saldo
4) Cerrar caja: informará el saldo final y cerrará la aplicación luego de una confirmación

Notas:
- Usar la biblioteca UTN: funciones UTN_getInt y UTN_getFloat
- No se puede ingresar/extraer dinero si no se cargó saldo inicial
- No puedo extraer más de lo que tengo
- El saldo inicial sólo se puede cargar una vez
- Los importes se deben mostrar con dos decimales*/

#include <stdio.h>
#include <stdlib.h>
#include "utnEntrada.h"


int main(void) {
	setbuf(stdout,NULL);

	float saldoInicial,saldoActual, ingresarDinero, EgresarDinero, cerrarCaja;




	return 0;
}
