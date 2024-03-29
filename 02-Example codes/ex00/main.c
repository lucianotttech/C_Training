/* Inclusión de librerías */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
// Nota: Si está entre comillas busca en la carpeta local del archivo
// Ejemplo: #include "myLib.h"

/* Constantes */
#define PI 3.14
#define NOMBRE_CONSTANTE 555
#define VAR_INT 20

/* Prototipo de función */
/*
tipo_que_devuelve nombre_de_la_funcion(lista_de_parametros)
{
    ...
}
*/

/* Variables Globales (en lo posible evitarlas) */
char variable_char = 'i';    // 'k' 'o' 'L' ...
int variable_int = 5;        // 1 2 3 -1 -100
float variable_float = 0.15; // 3.14 58.396 ...

/* main - Función principal */
int main()
{
    /* Variables Locales */
    char variable_char = 'i';    // 'k' 'o' 'L' ...
    int variable_int = 5;        // 1 2 3 -1 -100
    float variable_float = 0.15; // 3.14 58.396 ...
    // Nota - Buena práctica:
    //	Inicializarlas con un valor para evitar posibles errores

	/* Variables únicamente positivas */
    unsigned int variable_int_no_signada = 5; // 1 2 3 0 400 500

    // 1 byte = 8 bits
    // Signada:		De -128 a 127
    // No signada:	De	  0 a 255

    int8_t nombre_de_la_variable = VAR_INIT;   // 8 bits = 1 byte
    uint8_t nombre_de_la_variable = VAR_INT;   // 8 bits = 1 byte

    int16_t nombre_de_la_variable = VAR_INIT;  // 16 bits = 2 bytes
    uint16_t nombre_de_la_variable = VAR_INIT; // 16 bits = 2 bytes

    int32_t nombre_de_la_variable = VAR_INIT;  // 32 bits = 4 bytes
    uint32_t nombre_de_la_variable = VAR_INIT; // 32 bits = 4 bytes

    printf("Mi variable_int vale: %d \n", variable_int);
    printf("Mi variable_char vale: %c \n", variable_char);
    printf("Mi variable_float vale: %f \n", variable_float);

    return 0;
}
