#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* *create_array: it creates and array of characters
*@c: value of character initialised
*@size: the size of the memory to print
*Return: zero.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *s = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

