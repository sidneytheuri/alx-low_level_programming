#include "main.h"
/**
*print_sign - checks if input num is greater, equals or less then 0.
*@n: input num is and integer.
*Return: 1 which is greater than 0.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
