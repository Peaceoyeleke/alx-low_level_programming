#include "stdio.h"
#include "stdlib.h"

/**
 * main -  a program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0
 */

int main(void)
{

unsigned long t1 = 0, t2 = 1, nextterm = 0, sum = 0;
while (nextterm <= 4000000)
{
nextterm = t1 + t2;
t1 = t2;
t2 = nextterm;
if ((t1 % 2) == 0)
sum = sum + t1;
}
printf("%ld\n", sum);
return (0);
}
