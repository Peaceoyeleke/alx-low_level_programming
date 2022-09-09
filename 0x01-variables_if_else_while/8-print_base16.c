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
 * prints all letters in base 16 in the lower case
 */
{
int n;
char l;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}

{
putchar('\n');
}

return (0);
}
