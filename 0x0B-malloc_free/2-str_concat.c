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
char *nstr;
unsigned int i, j, len1 = 0, len2 = 0, size;
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
size = len1 + len2 + 1;
nstr = malloc(sizeof(char) * size);
if (nstr == NULL)
{
return (NULL);
}
i = 0;
while (i < len1)
{
nstr[i] = s1[i];
i++;
}
j = 0;
while (j < len2)
{
nstr[i] = s2[j];
i++;
j++;
}
nstr[i] = '\0';
return (nstr);
}
