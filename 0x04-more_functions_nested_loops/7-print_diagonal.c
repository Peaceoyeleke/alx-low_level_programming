#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
int a, b;

if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
