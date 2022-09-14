#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * 
 * @n: first natural number
 *
 * Return: Nothing
 */

void print_to_98(int n)
{

while (n < 98)
n++;
{
printf("%d, ", n);
}
while (n > 98)
n--;
{
printf("%d, ", n);
}
printf("98");
putchar('\n');
}
