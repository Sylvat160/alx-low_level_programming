#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * Return: the absolute value of int esdfsd
 */

void print_times_table(void)
{
int num, mult, prod;
for (num = 0; num <= 9; num++)
{
_putchar('0');
for (mult = 0; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 9)
{
_putchar(' ');
}
else
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
