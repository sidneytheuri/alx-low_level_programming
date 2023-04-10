#include "main.h"
/**
 * set_bit - does the setting of a bit to 1
 * @n: it is the pointer to unsigned int
 * @index: index of the bits
 * Return: 0ne on success and negative 1 on filure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int p;
if (index > 63)
	return (-1);

p = 1 << index;
*n = (*n | p);


return (1);
}

