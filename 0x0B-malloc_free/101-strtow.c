#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * wordnos - counts the number of words in a string
 * @str: string to count words in
 * Return: number of words
 */

int wordnos(char *str)
{
int c, w = 0, flag = 0;
for (c = 0; str[c] != '\0'; c++)
{
if (s[c] == '')
{
flag = 0;
}
else if (flag == 0)
{
flag = 1;
w++;
}
}
return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
{
len++;
}
words = wordnos(str);
if (words == 0)
{
return (NULL);
}
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
{
return (NULL);
}
while (start < end)
{
*tmp++ = str[start++];
}
*tmp = '\0';
matrix[k++] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
{
start = i;
}
}
matrix[k] = NULL;
return (matrix);
}
