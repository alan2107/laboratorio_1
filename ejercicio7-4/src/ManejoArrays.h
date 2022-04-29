#ifndef MANEJOARRAYS_H_
#define MANEJOARRAYS_H_

/// @brief Toma un array y lo inicializa con los valores del tercer parametro
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @param datoInicial: dato que se cargara en todas las posiciones de array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int inicializarArrayInt (int array[], int len, int datoInicial);


int cargaSecuencialDeArrayInt(int array[], int len, int datoMin, int datoMax, char * mensaje, char * mensajeError);


int cargaAleatoriaDeArrayInt(int array[], int len, int datoMin, int datoMax,
		char * mensajeDato, char * mensajePosicionEnArray, char * mensajeError);



/// @brief Toma un array y lo ordena de menor a mayor
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @param orden: 1 ordena de menor a mayor. 2 ordena de menor a mayor
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int ordenarArrayInt(int pArray[], int len, int orden);

/// @brief Toma un array y lo muestra al usuario
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int mostrarArrayInt(int array[], int len);

/// @brief Toma un array y lo inicializa con los valores del tercer parametro
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @param datoInicial: dato que se cargara en todas las posiciones de array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int inicializarArrayFloat (float array[], int len, float datoInicial);

int cargaAleatoriaDeArrayFloat(float array[], int len, int datoMin, int datoMax,
		char * mensajeDato, char * mensajePosicionEnArray, char * mensajeError);

int inicializarArrayChars(char array[], int len);

/// @brief Toma un array de caracteres y lo muestra al usuario
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int mostrarArrayChar(char array[], int len);

int inicializarMatrizchars(char array[][256], int len);

int buscarEspacioLibre(char array[], int len, int * indexEncontrado);

int buscarEspacioLibreMatriz(char array[][256], int len, int * indexEncontrado);

#endif
