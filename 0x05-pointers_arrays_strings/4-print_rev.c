#include "main.h"

/**
 * print_rev - prints a string in the reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	while (s[index] != '\0')
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
