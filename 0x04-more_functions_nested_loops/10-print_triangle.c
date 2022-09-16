#include "main.h"

/**
 * print_triangle - a function that prints triangle
 *
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
