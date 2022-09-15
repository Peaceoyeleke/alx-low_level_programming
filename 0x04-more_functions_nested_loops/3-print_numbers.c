#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
int n = 0;
while (n <= 9)
{
_putchar(n + '0');
n++;
}
_putchar('\n');
}
