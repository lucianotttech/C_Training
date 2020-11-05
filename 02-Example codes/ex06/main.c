/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t id;
    uint8_t descriptor [50];
} myStruct_t;

int main()
{
    uint8_t myArray [10];

    for(uint8_t x = 0 ; x < sizeof(myArray) ; x ++)
    {
        myArray[x] = sizeof(myArray) - x;
    }
        
    printf("Array values: \r\n");
    printf("Index\tValue  \r\n");
    printf("-----\t-----  \r\n");
    for(uint8_t x = 0 ; x < sizeof(myArray) ; x ++)
    {
        printf("%u\t%u \r\n", x, myArray[x]);
    }
    
    myStruct_t myStruct;    
    myStruct.id = 1;
    myStruct.descriptor[0] = 'A';
    myStruct.descriptor[1] = 'B';
    myStruct.descriptor[2] = 'C';
    myStruct.descriptor[3] = '\0';
    
    printf("\r\nMy struct size: %lu \r\n", sizeof(myStruct));
    printf("ID:         %u \r\n", myStruct.id);
    printf("Descriptor: %s \r\n", myStruct.descriptor);
    
    myStruct_t myStructArray [10];
    for(uint8_t x = 0 ; x < (sizeof(myStructArray) / sizeof(myStruct_t)) ; x ++)
    {
        myStructArray[x].id = x;
        sprintf(myStructArray[x].descriptor, "DESCRIPTOR %u", x);
    }
    
    printf("\r\nStruct Array: \r\n");
    printf("ID\tDescriptor    \r\n");
    printf("--\t----------    \r\n");
    for(uint8_t x = 0 ; x < (sizeof(myStructArray) / sizeof(myStruct_t)) ; x ++)
    {
        printf("%u\t%s \r\n", myStructArray[x].id, myStructArray[x].descriptor);
    }
    
    return 0;
}
