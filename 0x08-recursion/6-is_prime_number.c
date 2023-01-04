#include "main.h"

/**
 * helperFunction - helper function for is_prime_number
 * @num: number to be checked
 * @i: potential divisor
 * Return 1 if num is prime, 0 otherwise
 */

int helperFunction(int num, int i)
{
if (i < num)
{
if (num % i == 0)
{
return (0);
}
else
{
return (helperFunction(num, i + 1));
}
}
else
{
return (1);
}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (helperFunction(n, 2));
}
}
