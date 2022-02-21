/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include "file.h"

extern int32_t multiply(int32_t a, int32_t b);

int main()
{
    printf("Multiply:  %d \r\n", multiply(2, 2));
    printf("Factorial: %d \r\n", factorial(10));

    return 0;
}
