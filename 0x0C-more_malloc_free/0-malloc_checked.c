#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to print
 * Return: pointer to the concatenated string
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
