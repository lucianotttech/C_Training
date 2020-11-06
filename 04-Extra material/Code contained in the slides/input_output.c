#include <stdio.h>

int main()
{
    printf("%d", var_int);		// Integer
    printf("%ld", var_int);		// Long integer
    printf("%u", var_int);		// Unsigned integer
    printf("%nd", var_int);		// Integer with 'n' digits
    printf("%x", var_int);		// Hexadecimal
    printf("%X", var_int);		// Hexadecimal UPPERCASE
    printf("%p", var_ptr);		// Memory location in Hexa
    printf("%f", var_float);	// Float in decimal notation
    printf("%4.2f", var_float);	// Float with 4 digits + 2 decimal
    printf("%e", var_float);	// Float in exponential format
    printf("%g", var_float);	// Shorter between '%f' and '%e'
    printf("%c", var_char);     // Character
    printf("%s", var_string);	// String

    return 0;
}