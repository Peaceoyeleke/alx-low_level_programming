#include "main.h"

/**
 * is_prime_number - checks i a number is a prime number
 * @n: integer
 * Return: 1 if its prime else 0
 */

int is_prime_number(int n);
{
	if (n == 1 || n == 0)
		return (0);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
