#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @arg: list of arguments
 * Return: nothing
 */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - prints an integer
 * @arg: list of arguments
 * Return: nothing
 */

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - prints a float
 * @arg: list of arguments
 * Return: nothing
 */

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - prints a string
 * @arg: list of arguments
 * Return: nothiong
 */

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format : string
 * Description: if any argument is not of char,
 * int, float or char *
 * is ignored
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list st;
	int i = 0, j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(st, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(st);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
}
