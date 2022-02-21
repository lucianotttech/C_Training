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

    result = a & b;
    /*
    0b00001010
    0b00100010
    ----------
    0b00000010
    */
    printf("a and b: 0x%02X \r\n", result);

    result = a | b;
    /*
    0b00001010
    0b00100010
    ----------
    0b00101010
    */
    printf("a or b:  0x%02X \r\n", result);

    result = ~a;
    /*
    0b00001010
    ----------
    0b11110101
    */
    printf("not a:   0x%02X \r\n", result);

    result = a ^ a;
    /*
    0b00001010
    0b00001010
    ----------
    0b00000000
    */
    printf("a xor a: 0x%02X \r\n", result);

    // ASSIGMENT OPERATOR
    result = a << 1;
    /*
    0b00001010
    0b00010100
    */
    printf("a shifted left (*2): 0x%02X \r\n", result);

    return 0;
}
