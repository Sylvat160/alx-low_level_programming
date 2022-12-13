#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
{
ld *= -1;
}
_putchar(ld + '0');
return (0);
}