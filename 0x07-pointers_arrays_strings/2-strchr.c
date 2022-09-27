#include "main.h"

/**
 * _strchr - locates a charcter in a string
 * @s: string
 * @c: character
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
