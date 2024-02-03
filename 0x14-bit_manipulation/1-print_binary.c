#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * 
 * @n: the number to be converted.
 * 
 * Return: the binary number.
*/


void print_binary(unsigned long int n)
{
    int bit;

    if (n == 0)
        _putchar('0');

    while (n > 0)
    {
        bit = n & 1;
        _putchar(48 + bit);
        n = n >> 1;
    }
}
