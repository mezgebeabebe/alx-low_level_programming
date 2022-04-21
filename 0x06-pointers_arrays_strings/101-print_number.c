#include "main.h"

/**
 * print_number - print intenger number
 * @n: integer
 *
 * Return: none
 */

void print_number(int n)
{
int y = 100000000000000000;
int x, z;

for (x = 0; x < 10; x++)
{
if ((n / y) == 0 && z == 0)
{
y = (y / 10);
continue;
}
else if (z == 0)
{
_putchar((n / y) + '0');
z++;
}
else
{
_putchar ((n / y) % 10 + '0');
}
y = (y / 10);
}
}
