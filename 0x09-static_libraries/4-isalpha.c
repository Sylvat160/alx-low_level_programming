#include "main.h"

/**
 * _isalpha - checks for alpha
 * @c : charactere to be check
 * Return: 1 if charactere is a letter , 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
