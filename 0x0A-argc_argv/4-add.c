#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - prints the result of the addition, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int sum = 0, i;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
int b;
char *str = argv[i];
for (b = 0; str[b] != '\0'; b++)
{
if (str[b] < 48 || str[b] > 57)
{
printf("Error\n");
return (1);
}
}
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
