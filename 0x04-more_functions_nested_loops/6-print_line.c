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
int a = 0;
while (a < n && a > 0)
{
_putchar('-');
a++;
}
_putchar('\n');
}
