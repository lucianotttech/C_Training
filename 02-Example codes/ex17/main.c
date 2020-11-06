/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t x;
    uint32_t y;
    uint32_t *ptr = NULL;

    /* Values assignation */
    x = 10;
    y = 20;
    ptr = &x;

    printf("-------------------------------------------------------------------------------- \n");
    printf("  &x = %p \t This is the address of X \n", &x);
    printf("   x = %d \t\t This is the value of X \n",  x);
    printf("  &y = %p \t This is the address of Y \n", &y);
    printf("   y = %d \t\t This is the value of Y \n",  y);
    printf("&ptr = %p \t This is the address of the pointer                        \n", &ptr);
    printf(" ptr = 0x%x \t This is the value of the pointer                        \n",  ptr);
    printf("*ptr = %d \t\t This is the value at the address located in the pointer \n", *ptr);

    /* Read a value from the pointer */
    y = *ptr + 100;

    printf("-------------------------------------------------------------------------------- \n");
    printf("  &x = %p \t This is the address of X \n", &x);
    printf("   x = %d \t\t This is the value of X \n",  x);
    printf("  &y = %p \t This is the address of Y \n", &y);
    printf("   y = %d \t\t This is the value of Y \n",  y);
    printf("&ptr = %p \t This is the address of the pointer                        \n", &ptr);
    printf(" ptr = 0x%x \t This is the value of the pointer                        \n",  ptr);
    printf("*ptr = %d \t\t This is the value at the address located in the pointer \n", *ptr);

    /* Write a value using the pointer */
    *ptr = 200;

    printf("-------------------------------------------------------------------------------- \n");
    printf("  &x = %p \t This is the address of X \n", &x);
    printf("   x = %d \t\t This is the value of X \n",  x);
    printf("  &y = %p \t This is the address of Y \n", &y);
    printf("   y = %d \t\t This is the value of Y \n",  y);
    printf("&ptr = %p \t This is the address of the pointer                        \n", &ptr);
    printf(" ptr = 0x%x \t This is the value of the pointer                        \n",  ptr);
    printf("*ptr = %d \t\t This is the value at the address located in the pointer \n", *ptr);

    /* Use the pointer to point to the previous value */
    ptr --;

    printf("-------------------------------------------------------------------------------- \n");
    printf("  &x = %p \t This is the address of X \n", &x);
    printf("   x = %d \t\t This is the value of X \n",  x);
    printf("  &y = %p \t This is the address of Y \n", &y);
    printf("   y = %d \t\t This is the value of Y \n",  y);
    printf("&ptr = %p \t This is the address of the pointer                        \n", &ptr);
    printf(" ptr = 0x%x \t This is the value of the pointer                        \n",  ptr);
    printf("*ptr = %d \t\t This is the value at the address located in the pointer \n", *ptr);

    return 0;
}
