#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, c_i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	c = malloc(sizeof(*c) * l);

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c[c_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		c[c_i++] = s2[i];

	return (c);
}
