#include  "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int index;
va_start(strings, n);
char *str;
va_start(strings, n);
for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);
if (str)
{
printf("%s", str);
}
else
{
printf("(nil)");
}

if (index != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(strings);
}
