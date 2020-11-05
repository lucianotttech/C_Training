/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

#define MAX_VAL 20

int main()
{
    uint8_t a;
    a = 10;
    
    if(a == 5)
    {
        printf("five \r\n");
    }
    if(a == 2)
    {
        printf("two \r\n");
    }
    if(a == 8)
    {
        printf("eight \r\n");
    }
    else if(a == 10)
    {
        printf("ten \r\n");
    }
    else
    {
        printf("?? \r\n");
    }

    switch(a)
    {
        case 1:
            printf("one \r\n");
            break;
            
        case 3:
            printf("three \r\n");
            break;
            
        case 10:
            printf("ten \r\n");
            break;
            
        default:
            printf("?? \r\n");
            break;
    }

    if(a < MAX_VAL)
    {
        printf("A is smaller than %d \r\n", (int) MAX_VAL);
    }

    uint8_t b = 0;
    
    // LOGICAL OPERATOR
    if(a != b)
    {
        printf("a and b are different values \r\n");
    }

    uint8_t x;
    
    for(x = 0 ; x < 100 ; x ++)
    {
        if(x == a)
        {
            printf("a == %u \r\n", x);
            break;
        }
    }

    x = 0;
    printf("WHILE ITERATION: \r\n");
    while(x != 10)
    {
        printf("%u \r\n", x);
        x ++;
    }

    return 0;
}
