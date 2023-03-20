#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : string that will be appended to
 * @src : string to append to dest
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
{
dest_len++;
}
for (index = 0; src[index]; index++)
{
dest[dest_len + index] = src[index];
}

return (dest);
}
