#include "main.h"
#include "stdlib.h"
/**
 * print_to_98 - prints all natural numbers
 * 
 * @n: first natural number
 *
 * Return: Nothing
 */

void print_to_98(int n)
{

for (n < 98; n++)
{
printf("%d, ", n);
}
for (n > 98; n--)
{
printf("%d, ", n);
}
printf("98");
putchar('\n');
}
