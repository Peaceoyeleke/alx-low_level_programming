#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
/*
 * prints all possible combinations of two different digits
 */
{
int a, b;
for (a = 0; a < 9; a++)
{
for (b = a + 1; b < 10; b++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');

if (a == 8 && b == 9)
continue;

putchar(',');
putchar(' ');
}
}
{
putchar('\n');
}

return (0);
}