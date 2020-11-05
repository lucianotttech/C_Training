/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fun(int a) 
{ 
    printf("Value of 'a' is %d\n", a); 
}
  
int main() 
{  
    void (*fun_ptr)(int) = fun;  // & removed 
  
    fun_ptr(10);  // * removed 
  
    return 0; 
}
