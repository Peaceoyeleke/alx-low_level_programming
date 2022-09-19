#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
