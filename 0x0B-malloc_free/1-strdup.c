#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
char *nstr;
unsigned int i, len = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
nstr = malloc((len + 1) * sizeof(char));
if (nstr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
nstr[i] = str[i];
}
nstr[i] = '\0';
return (nstr);
}
