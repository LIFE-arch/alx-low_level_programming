#include "main.h"

/**
* print_most_numbers - funtion that prints the numbers, form 0 to 9.
* Do not print 2 and 4
*
* Return: Always 0 (success).
*/

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
}
