#include <stdio.h>          // Si está entre comillas sólo busca en la carpeta del archivo
#include <string.h>
#include <stdlib.h>
#include <stdint.h>       //

/* 

devolver nombre_func (lista de parámetros){
    ...
}

*/

// Definimos constantes

#define PI 3.14
#define NOMBRE_CONSTANTE 56
#define VAR_INIT 10


// Variables locales (evitar preferiblemente) -> editable desde cualquier función
int main()
{
    // Variables (locales)
    char variable_char = 'i';     // 'k' 'a' 'p'
    int variable_int = 5;       // 1 2 3 -1 -100
    float variable_float = 5.11;   // 3.14 4.201 42.3

    uint32_t nombre_de_la_variable = 0;     //u de unsigned, 32 de 32 bits (4 bytes). 
                                            //No depende de la estructura del ordenador
    int32_t a = VAR_INIT;

    int16_t b = VAR_INIT;
    uint16_t c = VAR_INIT;

    int8_t d = VAR_INIT;
    uint8_t e = VAR_INIT;


    // 1 byte = 8 bits
    // signada: -128 a 127
    // no signada: 0 a 255

    printf("Mi variable vale: %d \n",variable_int);
    printf("Mi variable vale: %c \n",variable_char);
    printf("Mi variable vale: %f \n",variable_float);


    //buenas prácticas: inicializarlas con un valor para evitar posibles errores

    unsigned int variable_int_no_signada = 5; // Variables únicamente positivas  
    return 0;
}