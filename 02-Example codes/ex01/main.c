/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#define USE_STDINT  // Try commenting / uncommenting this line using "//"
#define UNDEF_TEST_STRING "\r\nThis is the undef test string"

#include <stdio.h>
#ifdef USE_STDINT
#include <stdint.h>
#endif

int main()
{
    typedef char my_uint8_type;
    printf("\r\nMy_uint8_type: %lu \r\n", sizeof(my_uint8_type));

    #ifndef USE_STDINT
    printf("\r\nMy type size:     \r\n");
    printf("Char:             %lu \r\n", sizeof(char));
    printf("Integer:          %lu \r\n", sizeof(int));
    printf("Unsigned Integer: %lu \r\n", sizeof(unsigned int));
    printf("Long:             %lu \r\n", sizeof(long));
    printf("Double:           %lu \r\n", sizeof(double));
    printf("Float:            %lu \r\n", sizeof(float));
    #endif

    #ifdef USE_STDINT
    printf("\r\nMy standard type size: \r\n");
    printf("Signed int 8:    %lu \r\n", sizeof(int8_t));
    printf("Unsigned int 8:  %lu \r\n", sizeof(uint8_t));
    printf("Signed int 16:   %lu \r\n", sizeof(int16_t));
    printf("Unsigned int 16: %lu \r\n", sizeof(uint16_t));
    printf("Signed int 32:   %lu \r\n", sizeof(int32_t));
    printf("Unsigned int 32: %lu \r\n", sizeof(uint32_t));
    printf("Signed int 64:   %lu \r\n", sizeof(int64_t));
    printf("Unsigned int 64: %lu \r\n", sizeof(uint64_t));
    #endif

    #ifdef USE_STDINT
    #undef USE_STDINT
    printf(UNDEF_TEST_STRING);
    #endif
    
    #ifdef USE_STDINT
    printf(UNDEF_TEST_STRING);
    #endif
    
    return 0;
}
