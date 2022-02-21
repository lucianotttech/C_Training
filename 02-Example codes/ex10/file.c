/*****************/
/*   Libraries   */
/*****************/
#include <stdint.h>

/*****************/
/*   Functions   */
/*****************/

// static int32_t multiply(int32_t a, int32_t b)
int32_t multiply(int32_t a, int32_t b)
{
    return (a * b);
}

int32_t factorial(int32_t a)
{
    int32_t result = a ? a : 1;

    while (a > 1)
    {
        result = multiply(result, --a);
    }

    return result;
}
