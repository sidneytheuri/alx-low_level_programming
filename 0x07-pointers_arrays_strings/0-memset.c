#include "main.h"
/**
* *_memset - fills memeory with a constant byte
*@s: memory area to be filled
*@b: character to copy
*@n: the number of times @b is going to be coppied
*Return: pointer of the memeory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
