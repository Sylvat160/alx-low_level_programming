#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number to be evaluated
 * @m: number to be evaluated
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;

while (xor)
{
bits += xor & 1;
xor >>= 1;
}
return (bits);
}
