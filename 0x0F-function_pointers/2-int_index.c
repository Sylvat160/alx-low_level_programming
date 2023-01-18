#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of first element for which cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, res;
res = -1;
if (array && cmp)
{
if (size <= 0)
{
return (res);
}
for (i = 0; i < size; i++)
{
cmp(array[i]);
if (cmp(array[i]) > 0)
{
res = i;
break;
}
if ((cmp(array[i]) == (-1)))
{
return (res);
}
}
}
return (res);
}
