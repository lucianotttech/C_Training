/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

#define MAX_SIZE 50

typedef struct
{
    uint8_t id;
    uint8_t descriptor[MAX_SIZE];
} myStruct_t;

uint8_t myFunction(myStruct_t *myStructPtr)
{
    printf("\r\nMy struct size: %lu bytes \r\n", sizeof(*myStructPtr));
    printf("ID: %u         \r\n", (*myStructPtr).id);
    printf("Descriptor: %s \r\n", (*myStructPtr).descriptor);

    printf("ID: %u         \r\n", myStructPtr->id);
    printf("Descriptor: %s \r\n", myStructPtr->descriptor);

    return 10;
}

int main()
{
    myStruct_t myStruct;
    myStruct.id = 1;
    myStruct.descriptor[0] = 'A';
    myStruct.descriptor[1] = 'B';
    myStruct.descriptor[2] = 'C';
    myStruct.descriptor[3] = '\0';

    printf("\r\nMy struct size: %lu bytes \r\n", sizeof(myStruct));

    myFunction(&myStruct);

    uint8_t (*ptrFunction)(myStruct_t *);

    ptrFunction = &myFunction; // Also "myFunction" works

    printf("\r\nReturn value: %u", (*ptrFunction)(&myStruct)); // Also "ptrFunction (&myStruct)" works

    return 0;
}
