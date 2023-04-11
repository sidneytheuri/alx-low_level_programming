#include "main.h"
#include <stdio.h>
/**
 * get_endianness - looks fo endianness
 * Return: 1 for little endian and 0 for big
 */



int get_endianness(void)

{
	unsigned int y;
	char *u;

	y = 1;

	u = (char *) &y;


	return ((int)*u);
}

