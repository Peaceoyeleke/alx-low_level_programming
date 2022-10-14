#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: constant integer
 * @...: variable number of arguments
 * Return: sum of its parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	 va_start(num, n);
		for (i = 0; i < n; i++)
			sum += va_arg(num, int);

	va_end(num);

	return (sum);

}
