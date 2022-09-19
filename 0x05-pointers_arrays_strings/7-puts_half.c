#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	i = 0;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
