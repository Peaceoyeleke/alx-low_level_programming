#include "main.h"

/**
 * _print_rev_recursion - prints a string in the reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i--)
	{
		_print_rev_recursion(s[i] + 1);
		_putchar(*s);
	}

