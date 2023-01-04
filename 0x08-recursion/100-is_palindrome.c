#include "main.h"

/**
 * _lenght - returns the length of a string
 * @s: pointer to a string
 * Return: length of a string
 */

int _lenght(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _lenght(s + 1));
}

/**
 * checkp - check if a string is a palindrome
 * @i: index
 * @l: lenght of the string
 * @s: pointer to a string
 * Return: 1 if is a palindrome, 0 if not
 */

int checkp(int i, int l, char *s)
{
if (l > 0)
{
if (s[i] == s[l])
{
return (checkp(i + 1, l - 1, s));
}
else if (s[i] != s[l])
{
return (0);
}
else
{
return (1);
}
}
return (1);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to a string
 * Return: 1 if is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
return (checkp(0, _lenght(s) - 1, s));
}
