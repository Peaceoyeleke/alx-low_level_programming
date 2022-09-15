#include "stdio.h"

/**
 * main - program that prints first 50 fibocanni numbers
 *
 * Return: Always 0
 */

int main(void)
{
int i;
unsigned long t1 = 0, t2 = 1, nextterm;


for (i = 0; i < 50; i++)
{
nextterm = t1 + t2;
printf("%ld", nextterm);
t1 = t2;
t2 = nextterm;

if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
