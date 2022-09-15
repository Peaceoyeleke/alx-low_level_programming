#include "stdio.h"

/**
 * main - program that prints first 50 fibocanni numbers
 *
 * Return: Always 0
 */

int main(void)
{
int i;
int t1 = 1, t2 = 2;
int nextterm = t1 + t2;

for (i = 0; i <= 50; ++i)
{
printf("%d", nextterm);
t1 = t2;
t2 = nextterm;
nextterm = t1 + t2;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
