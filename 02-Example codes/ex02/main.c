/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

uint16_t g_myGlobalVar = 500;

void MyFunction(void)
{
    uint16_t myLocalVar = 20;
    static uint16_t myStaticLocalVar = 20;
    
    g_myGlobalVar += 100;
    
    printf("\r\nINSIDE THE FUNCTION\r\n");
    printf("myLocalVar:       %u \r\n",myLocalVar);
    printf("myStaticLocalVar: %u \r\n",myStaticLocalVar);
    printf("g_myGlobalVar:    %u \r\n",g_myGlobalVar);
    
    g_myGlobalVar += 100;
    myLocalVar ++;
    myStaticLocalVar ++;
}

int main()
{
    uint16_t myLocalVar;
    myLocalVar = 10;

    printf("\r\nIN MAIN BEFORE FUNCTION\r\n");
    printf("myLocalVar:    %u \r\n", myLocalVar);
    printf("g_myGlobalVar: %u \r\n", g_myGlobalVar);

    MyFunction();

    printf("\r\nIN MAIN AFTER FUNCTION\r\n");
    printf("myLocalVar:    %u \r\n", myLocalVar);
    printf("g_myGlobalVar: %u \r\n", g_myGlobalVar);

    MyFunction();
    
    return 0;
}
