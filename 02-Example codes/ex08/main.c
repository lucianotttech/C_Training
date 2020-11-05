/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t myArray [10];
    
    for(uint8_t x = 0 ; x < (sizeof(myArray) / sizeof(uint16_t)) ; x ++)
    {
        myArray[x] = x;
    }
    
    uint16_t *ptr16;
    uint8_t *ptr8;
    
    ptr16 = (uint16_t *) myArray;
    ptr8 = (uint8_t *) myArray;
    
    uint16_t sum = 0;
    
    printf("Array: ");
    for(uint8_t x = 0 ; x < (sizeof(myArray) / sizeof(uint16_t)) ; x ++)
    {
        printf("%u", *ptr16);
        sum += *ptr16;
        ptr16 ++;
    }
    printf("           <= Word values \r\n");
    printf("Sum:   %u \r\n", sum);
    
    printf("Array: ");
    for(uint8_t x = 0 ; x < sizeof(myArray) ; x ++)
    {
        printf("%u", *ptr8);
        ptr8 ++;
    }
    printf(" <= Byte values");
    
    return 0;
}
