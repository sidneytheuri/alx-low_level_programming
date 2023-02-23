#include "main.h"
/**
*more_numbers - prints 10 times the numbers, from 0 to 14
*10 times
*Return: the 10 numbers
*/
void more_numbers(void)
{
int i, ch;
for (i = 0; i < 9; i++)
{
for (ch = 0; ch < 15; ch++)
{
if (ch > 9)
_putchar(ch / 10 + '0');
_putchar(ch % 10 + '0');
}
_putchar('\n');
}
}
