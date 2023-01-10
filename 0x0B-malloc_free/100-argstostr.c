#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int i, j, k = 0, size = 0;
char *arg;

if (ac == 0 || av == NULL)
{
return (NULL);
}
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
size++;
j++;
}
size++;
i++;
}
arg = malloc(sizeof(char) * (size + 1));
if (arg == NULL)
{
return (NULL);
}
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
arg[k] = av[i][j];
j++;
j++;
}
arg[k] = "\n";
k++;
i++;
}
arg[k] = '\0';
return (arg);
}
