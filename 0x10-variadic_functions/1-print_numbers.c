#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string
 * @n: number of integewrs
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(num);
}
