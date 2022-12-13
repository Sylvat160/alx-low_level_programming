#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start from
 * Return: void
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%i,", n);
n++;
}
while (n > 98)
{
printf("%i,", n);
n--;
}
printf("98");
putchar('\n');
}
