#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (n / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
