/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_SIZE 50

typedef struct
{
    uint8_t id;
    uint8_t descriptor[MAX_SIZE];
    uint8_t edad;
} myStruct_t;

void PrintStruct(myStruct_t *myStructPtr)
{
    /* Acceso a través de (*puntero).elemento */
    printf("ID: %u         \r\n", (*myStructPtr).id);
    printf("Descriptor: %s \r\n", (*myStructPtr).descriptor);
    printf("La edad es: %u \r\n", (*myStructPtr).edad);

    /* Acceso a través de puntero->elemento */
    printf("ID: %u         \r\n", myStructPtr->id);
    printf("Descriptor: %s \r\n", myStructPtr->descriptor);
    printf("La edad es: %u \r\n", myStructPtr->edad);

    printf("\n");

    return;
}

void Cumpleanios(myStruct_t *puntero)
{
    (puntero->edad)++;

    return;
}

void IncrementarID(myStruct_t *puntero)
{
    (puntero->id)++;

    return;
}

int main()
{
    /* Declaración de variable tipo estructura */
    myStruct_t myStruct;

    /* Carga de valores en la estructura */
    myStruct.id = 1;
    strcpy(myStruct.descriptor, "Nombre Apellido");
    myStruct.edad = 33;

    /* Imprimir información */
    printf("\r\nMy struct size: %lu bytes \r\n", sizeof(myStruct));
    PrintStruct(&myStruct);

    /* Llamado a funciones */
    Cumpleanios(&myStruct);
    IncrementarID(&myStruct);

    /* Puntero a función */
    // Sintaxis: return_datatype (*func_ptr) (parameter_datatypes) = function_name;
    void (*puntero_funcion)(myStruct_t *);

    /* Llamado a funciones a través del puntero */
    puntero_funcion = Cumpleanios; // Also can be used like this: puntero_funcion = &Cumpleanios;
    puntero_funcion(&myStruct);    // Also can be used like this: (*puntero_funcion)(&myStruct);

    puntero_funcion = IncrementarID;
    puntero_funcion(&myStruct);

    /* Imprimir información */
    PrintStruct(&myStruct);

    return 0;
}
