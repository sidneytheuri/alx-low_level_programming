#include <stdio.h>
#include "main.h"
/**
 * flip_bits - does the return of bits
 * @m: a number
 * @n: a number
 * Return: no of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int allbits;

	for (allbits = 0; n || m; n >>= 1, m >>= 1)

	{
		if ((n & 1) != (m & 1))
			allbits++;
	}

	return (allbits);
}

