#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to memory area
 * @src: constant byte
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}

return (dest);
}
