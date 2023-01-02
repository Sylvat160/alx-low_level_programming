#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @c: constant byte
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */

char *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
{
memory[index] = value;
}
return (memory);
}
