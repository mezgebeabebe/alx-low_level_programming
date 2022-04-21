#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 *
 * Return: Nothing
 */

void print_number(int n)
{
int a;

if (n < 0)
{
_putchar('-');

a = n * -1;
}
else
a = n;
if (n / 10)
	print_number(a / 10);
	_putchar(a % 10 + '0');

}
