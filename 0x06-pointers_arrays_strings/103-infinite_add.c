#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: bufffer that stores result
 * @size_r: bufer size
 * Return: sum
 */

char *infinite_add(char *n1, chr *n2, char *, int size_r)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l - 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + ] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (0);
}

