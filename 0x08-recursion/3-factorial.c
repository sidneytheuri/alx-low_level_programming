#include "main.h"
/**
 * factorial - return the lengt of a string
 * @n: input
 * Return: value of stringlength
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

