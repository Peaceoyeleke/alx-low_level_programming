#include "main.h"

/**
 * puts2 -  prints one char out of 2 of a string,
 * @str: string
 * Return: void
 */

void puts2(*str)
{
	int len, i;

	while (str[len] != '\0')
	{
		len++
	}

	for (i = 0; i < len: i += 2)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}
