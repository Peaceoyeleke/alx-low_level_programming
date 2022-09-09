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
 * prints all alphabets except q and e
 */
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' && x != 'e')
putchar(x);
}

{
putchar('\n');
}

return (0);
}
