/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t *ptr;
    uint8_t x;
    uint8_t y;

    ptr = &y;
    x = 10;
    *ptr = 20;

    printf("Pointer address                                 = %p \n", &ptr);
    printf("Address pointed by the pointer                  = %x \n", ptr);
    printf("Value inside the address pointed by the pointer = %d \n", *ptr);

    printf("X value   = %d \n", x);
    printf("X address = %p \n", &x);

    printf("Y value   = %d \n", y);
    printf("Y address = %p \n", &y);

    x = *ptr + x;

    printf("Pointer address                                 = %p \n", &ptr);
    printf("Address pointed by the pointer                  = %x \n", ptr);
    printf("Value inside the address pointed by the pointer = %d \n", *ptr);

    printf("X value   = %d \n", x);
    printf("X address = %p \n", &x);

    printf("Y value   = %d \n", y);
    printf("Y address = %p \n", &y);

    ptr = &x;
    *ptr = 40;
    
    printf("Pointer address                                 = %p \n", &ptr);
    printf("Address pointed by the pointer                  = %x \n", ptr);
    printf("Value inside the address pointed by the pointer = %d \n", *ptr);

    printf("X value   = %d \n", x);
    printf("X address = %p \n", &x);

    printf("Y value   = %d \n", y);
    printf("Y address = %p \n", &y);
    
    return 0;
}
