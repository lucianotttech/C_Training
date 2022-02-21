/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef enum
{
    red,
    black,
    green,
} color_t;

const uint8_t k_color[][10] = {"RED", "BLACK", "GREEN"};

typedef struct
{
    color_t color; // <= 4 Byte
    uint8_t id;    // <= 1 Byte
} car_t;

int main()
{
    car_t *myCar;

    printf("Tamaño de color_t = %d \n\r", sizeof(color_t));
    printf("Tamaño de uint8_t = %d \n\r", sizeof(uint8_t));
    printf("Quiero %d bytes de memoria \n\r", sizeof(car_t));

    myCar = malloc(sizeof(car_t));

    myCar->color = black;
    myCar->id = 1;

    printf("ID: %u \t Color: %u \r\n", myCar->id, myCar->color);
    printf("ID: %u \t Color: %s \r\n", myCar->id, k_color[myCar->color]);

    free(myCar);

    return 0;
}
