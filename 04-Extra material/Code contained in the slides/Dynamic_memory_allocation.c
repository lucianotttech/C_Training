/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int first()
{
    return 1;
}

int second()
{
    return 2;
}

int main(int argc, char ** argv)
{
    first();
    int n = second();
    
    printf("Hello World \n");
    
    int * a = (int *) malloc(n * sizeof(int));
    
    /* Do something here with 'a' */
    *a = first();
    printf("a = %d", *a);
    
    free(a);

    return 0;
}
