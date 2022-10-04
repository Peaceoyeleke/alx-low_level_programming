#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocted memory
 * @str: string
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *c;
	int i, l;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;
	c = malloc(sizeof(*c) * (l + 1));
	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}

	c[l] = '\0';
	
	return (c);
}
