#include "main.h"

/**
 * helperFunction - helper function for _sqrt_recursion
 * @num: number to be factored
 * @pSqrt: potential square root
 * Return: natural square root of num
 */
int helperFunction(int num, int pSqrt)
{
if ((pSqrt * pSqrt) == num)
{
return (pSqrt);
}
else
{
if ((pSqrt * pSqrt) > num)
{
return (-1);
}
else
{
return (helperFunction(num, pSqrt + 1));
}
}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be factored
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (helperFunction(n, 0));
}
}
