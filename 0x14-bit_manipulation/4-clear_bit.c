#include "main.h"
#include <stdio.h>
/**
 * clear_bit - stets the value to 0
 * @n: is a pointer to unsigned int
 * @index: index of a bit
 * Return: 1 when correct and -1 when failed
 */
int clear_bit(unsigned long int *n, unsigned  int index)
{
unsigned int o;


if (index > 63)
	return (-1);

o = 1 << index;
if (*n & o)
	*n = o;
return (1);
}

