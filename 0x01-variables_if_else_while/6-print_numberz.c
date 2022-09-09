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
 * prints all single digit number using putchar function
 */
{
int x;
for (x = 0; x < 10; x++)
{
putchar((x % 10) + '0');
}

{
putchar('\n');
}

return (0);
}
