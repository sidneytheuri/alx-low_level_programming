#include "main.h"
/**
*_isupper - check if chracter is uppercase
*@c: input char
*Return: 1 if char is uppercase
*if not return 0
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
