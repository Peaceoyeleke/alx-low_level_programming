#include "main.h"
#include "stdio.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
long int i;
long int num;
long int max;

max = -1;
num = 612852475143;

while (num % 2 == 0)
{
max = 2;
num /= 2;
}

for (i = 3; i <= num / 2; i += 2)
{
while (num % i == 0)
{
max = i;
num /= i;
}
}
if (num > 2)
max = num;

printf("%ld\n", max);
return (0);
}
