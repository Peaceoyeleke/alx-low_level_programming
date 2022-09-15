#include "main.h"

/**
 * print_line - function that draws a straight line
 *
 * @n: number of times _ should print
 *
 * Return: nothing
 */

void print_line(int n)
{
int a;

if (n > 0)
{
for (a = 0; a < n; a++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
