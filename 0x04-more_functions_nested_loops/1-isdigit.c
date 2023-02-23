#include "main.h"
/**
*_isdigit - checks for numbers between 0 to 9
*@c:input number
*Return: 0 if number is in range
*if not return 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
