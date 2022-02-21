/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

#define MAX_SIZE 10

int main()
{
    uint16_t myArray[MAX_SIZE];

    printf("sizeof(myArray)  = %d \r\n", sizeof(myArray));
    printf("sizeof(uint16_t) = %d \r\n", sizeof(uint16_t));
    printf("Elements         = %d \r\n", (sizeof(myArray) / sizeof(uint16_t)));

    // Write the array
    printf("Index \t Value \r\n");
    printf("----- \t ----- \r\n");
    for (uint8_t index = 0; index < (sizeof(myArray) / sizeof(uint16_t)); index++)
    {
        myArray[index] = -index;
        printf("%d \t %d \r\n", index, (int16_t)myArray[index]);
    }

    uint16_t *ptr16 = NULL;
    uint8_t *ptr8 = NULL;

    ptr16 = (uint16_t *)myArray; // <= This is the same than: ptr16 = (uint16_t *) &myArray[0];
    ptr8 = (uint8_t *)myArray;

    uint16_t sum = 0;

    printf("Array: ");
    for (uint8_t index = 0; index < (sizeof(myArray) / sizeof(uint16_t)); index++)
    {
        printf("0x%x ", *ptr16);
        sum = sum + *ptr16;
        ptr16++;
    }
    printf("           <= Word values \r\n");
    printf("Sum:   %u \r\n", sum);

    printf("Array: ");
    for (uint8_t x = 0; x < sizeof(myArray); x++)
    {
        printf("0x%x ", *ptr8);
        ptr8++;
    }
    printf(" <= Byte values");

    return 0;
}
