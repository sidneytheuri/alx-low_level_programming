#include "main.h"
/**
* _strncat - concantenates two strings
* @dest: strings to be appende
* @src: string to e appended
* @n: number of bytes
* Return: A pointer of string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
