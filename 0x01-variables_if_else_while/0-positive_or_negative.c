#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*
 * main - Prints whether the number stored in the variable n is positive or negative, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (0 == 0)
{
printf("%d is zero\n", n);
}
else (n < 0) 
{
printf("%d is negative\n", n);
}

return (0);
}
