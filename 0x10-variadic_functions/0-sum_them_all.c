#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: constant integer
 * @...: variable number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0;
	unsigned int i;

	va_start(sum, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(num, int);
	}
	
	va_end(num);
	return (sum);
}
