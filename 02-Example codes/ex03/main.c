/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

uint16_t g_myGlobalVar = 500;

int16_t MySubtract(int8_t a, int8_t b)
{
    return(a - b);
}

int main()
{
    int16_t a;
    int16_t b;
    
    a = 10;
    b = 20;
    
    printf("My result: %d \r\n", MySubtract((int8_t) a, (int8_t) b));
    printf("My result: %d \r\n", (uint16_t) MySubtract((int8_t) a, (int8_t) b));
    
    return 0;
}
