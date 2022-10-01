#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, less than 0 if s1 < s2 , more than 0 is s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
