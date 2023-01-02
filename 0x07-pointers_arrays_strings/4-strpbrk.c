#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (j = 0; *(s + j); j++)
{
for (i = 0; *(accept + i); i++)
{
if (*(s + j) == *(accept + i))
{
break;
}
}
if (*(accept + i) != '\0')
{
return (s + i);
}
}
return (0);
}
