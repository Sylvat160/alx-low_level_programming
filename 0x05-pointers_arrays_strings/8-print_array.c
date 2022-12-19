#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
_putchar(", ");
}
}
_putchar("\n");
}