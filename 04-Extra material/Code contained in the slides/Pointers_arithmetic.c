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
    uint8_t vector[100];    /* integer array */
    uint8_t *ptr;           /* int8 pointer */
    
    ptr = &vector[0];       /* ptr points to vector initial address */
    *ptr = 33;              /* vector[0] = 33 */
    *(ptr+1) = 44;          /* vector[1] = 44 */
    *(ptr+2) = 90;          /* vector[2] = 90 */
    
    uint8_t index;
    for(index = 0; index < 3 ; index ++)
    {
        printf("vector index = %d - value = %d \n", index, vector[index]);
    }
    
    uint16_t *ptr16;        /* int16 pointer */
    ptr16 = &vector[0];     /* ptr points to vector initial address */
    ptr16 ++;               /* vector[2] == *ptr16 */
    *ptr16 = 55;            /* vector[2] = 55 */

    for(index = 0; index < 3 ; index ++)
    {
        printf("vector index = %d - value = %d \n", index, vector[index]);
    }

    return 0;
}
