#include "main.h"
/**
*_strncpy - makes copy of string
*@dest: A character pointer
*@src: Apointer to character
*@n: number
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
