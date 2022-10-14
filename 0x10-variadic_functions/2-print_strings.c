#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator : string
 * @n: number iof strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

		va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i != n - 1)
				printf("%s", separator);
	}

	printf("\n");
	va_end(string);
}
