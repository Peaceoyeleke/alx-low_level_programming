#include "main.h"

/**
 * _print_rev_recursion - prints a string in the reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
