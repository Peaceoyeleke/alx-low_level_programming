#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer to the  string
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
