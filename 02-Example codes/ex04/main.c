/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a;
    uint8_t b;
    uint8_t result;
    
    a = 0x0A;       // = 0b00001010
    b = 0b00100010; // = 0x22
    
    // BITWISE OPERATORS
    printf("a: 0x%02X \r\n", a);
    printf("b: 0x%02X \r\n", b);
    
    result = a&b;
    printf("a and b: 0x%02X \r\n", result);
    
    result = a|b;
    printf("a or b:  0x%02X \r\n", result);
    
    result = ~a;
    printf("not a:   0x%02X \r\n", result);
    
    result = a^a;
    printf("a xor a: 0x%02X \r\n", result);
    
    // ASSIGMENT OPERATOR
    result = a << 1;
    printf("a shifted left (*2): 0x%02X \r\n", result);
    
    return 0;
}
