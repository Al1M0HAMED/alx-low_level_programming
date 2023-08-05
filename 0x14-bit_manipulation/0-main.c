#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("10");
    printf("%u\n", n);
    n = binary_to_uint("01");
    printf("%u\n", n);
    n = binary_to_uint("0");
    printf("%u\n", n);
    n = binary_to_uint("11111111111111111111111111111111");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000000000000000000000000000000001");
    printf("%u\n", n);
    return (0);
}

