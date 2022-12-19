#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */

int main(void)
{
int i, sum, n;
char password[100];
sum = 0;
srand(time(NULL));
for (i = 0; i < 100; i++)
{
password[i] = rand() % 78;
sum += (password[i] + '0');
putchar(password[i] + '0');
if ((2772 - sum) < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}