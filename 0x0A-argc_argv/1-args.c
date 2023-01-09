#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
