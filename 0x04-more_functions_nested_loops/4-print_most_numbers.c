#include "main.h"
/**
* print_most_numbers - prints numbers from 0 to 9
* do not print 2 or 4
* Return: the numbers
*/
void print_most_numbers(void)
{
int num;
for (num = 48; num <= 58; num++)
{
if (num != 50 && num != 52)
_putchar(num);
}
_putchar('\n');
}
