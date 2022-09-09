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
 * prints all possible combination of single digits
 */

{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}

{
putchar('\n');
}

return (0);
}
