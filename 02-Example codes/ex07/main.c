/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

typedef enum{
    red,
    black,
    green,
} color_t;

const uint8_t k_color [] [10] = {"RED", "BLACK", "GREEN"};

typedef struct{
    color_t color;
    uint8_t id;    
} car_t;

typedef struct{
    uint8_t bit0:1;
    uint8_t bit1:1;
    uint8_t bit2:1;
    uint8_t bit3:1;
    uint8_t bit4:1;
    uint8_t bit5:1;
    uint8_t bit6:1;
    uint8_t bit7:1;
} bit_t;

typedef union{
    bit_t bit [2];
    uint8_t byte [2];
    uint16_t word;
} union_t;

int main()
{
    car_t myCar;
    myCar.color = black;
    myCar.id = 1;
    
    printf("My Car information: \r\n");
    printf("ID: %u \t Color: %u \r\n", myCar.id, myCar.color);
    printf("ID: %u \t Color: %s \r\n", myCar.id, k_color[myCar.color]);
    
    union_t myUnion;
    myUnion.word = 0x1234;  // = 0b0001.0010.0011.0100
    
    printf("\r\nUnion size:      %lu bytes", sizeof(myUnion));
    printf("\r\nBit struct size: %lu bytes \r\n", sizeof(bit_t));
    
    printf("\r\nWORD: 0x%X \t HIGH: 0x%X \t LOW: 0x%X", myUnion.word, myUnion.byte[1], myUnion.byte[0]);
    printf("\r\nBITS: ");
    for(int8_t x = (sizeof(myUnion) - 1) ; x >= 0 ; x--)
    {
        printf("%u%u%u%u%u%u%u%u",  \
            myUnion.bit[x].bit7,    \
            myUnion.bit[x].bit6,    \
            myUnion.bit[x].bit5,    \
            myUnion.bit[x].bit4,    \
            myUnion.bit[x].bit3,    \
            myUnion.bit[x].bit2,    \
            myUnion.bit[x].bit1,    \
            myUnion.bit[x].bit0);
    }
    
    return 0;
}
