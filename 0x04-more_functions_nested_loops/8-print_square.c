#include "main.h"

/**
 * print_square - function that prints square
 *
 * @size: size of square
 *
 * Return: nothingg
 */

void print_square(int size)
{
int s, r;

if (size > 0)
{
for (s = 0; s < size; s++)
{
for (r = 0; r < size; r++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
