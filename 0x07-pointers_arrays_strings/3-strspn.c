#include "main.h"

/**
 * _strspn - gets the length off a prefix substring
 * @s: string
 * @accept: string
 * @c: character
 * Return: number of bytes in s which contains only o bytes from accept
 */

unsigned int (char *s, char *accept)
{
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] != 32)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
		else
			return (c);
}
