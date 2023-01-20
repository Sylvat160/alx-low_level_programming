#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0, j, c = 0;
char *s;
const char t_arg[] = "cifs";

va_start(ap, format);
while (format && format[i])
{
j = 0;
while (t_arg[j])
{
if (format[i] == t_arg[j] && c)
{
printf(", ");
break;
}
j++;
}
switch (format[i])
{
case 'c':
    printf("%c", va_arg(ap, int)), c = 1;
    break;
case 'i':
    printf("%d", va_arg(ap, int)), c = 1;
    break;
case 'f':
    printf("%f", va_arg(ap, double)), c = 1;
    break;
case 's':
    str = va_arg(ap, char *), c = 3;
    if (!str)
    {
        printf("(nil)");
        break;
    }
    printf("%s", str);
    break;
}
i++;
}
printf("\n"), va_end(ap);
}
