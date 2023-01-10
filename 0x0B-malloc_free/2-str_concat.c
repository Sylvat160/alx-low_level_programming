#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
unsigned int len1 = 0, len2 = 0, size, i = 0, j = 0;
char *nstr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
size = len1 + len2;
nstr = malloc((size + 1) * sizeof(char));
if (nstr == NULL)
{
return (NULL);
}
while (i < len1)
{
nstr[i] = s1[i];
}
while (i <= size)
{
nstr[i] = s2[j];
i++;
j++;
}
return (nstr);
}
