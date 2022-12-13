#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * Return: the absolute value of int esdfsd
 */

void times_table(void)
{
int a = 0;
int b;
int rep;
while (a <= 9)
{
b = 0;
while (b <= 9)
{
rep = a * b;
if (b == 0)
{
_putchar('0' + rep);
}
else if (rep < 10)
{
_putchar(' ');
_putchar('0' + rep);
}
else
{
_putchar('0' + rep / 10);
_putchar('0' + rep % 10);
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
}
