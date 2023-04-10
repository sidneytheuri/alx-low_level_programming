#include "main.h"
/**
 * binary_to_uint - does conversion of binary to unsigned int
 * @b: acts as a pointer to a string of 0 and 1 chars
 * Return: NULL for unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int no;
int len;
int i;

if (!b)
return (0);
no = 0;

for (len = 0; b[len] != '\0'; len++)
;

for (len--, i = 1; len >= 0; len--, i *= 2)
{

if (b[len] != '0' && b[len] != '1')
{
return (0);
}
if (b[len] & 1)
{
no += i;
}
}
return (no);
}

