/*
 * File: 101-print_number.c
 * Auth: Brennan D Baraban
 */

include "main.h"

/**
 * print_number - print intenger number
 * @n: integer
 *
 * Return: none
 */

void print_number(int n)
{

	unsigned int num = n;

	if (n < 0)
	{
	_putchar('-');
	num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
