#include "main.h"

/**
 * palind2 - obtains length of s
 * @s: string
 * @l: integer to count length
 * Return: 1 on success
 */

int palind2(char *s, int l)
{
	if (*s == 0)
		return (l - 1);
	return (palind2(s + 1, l + 1));
}

/**
 * palind3 - compares string vs str rev
 * @s: string
 * @l: length
 * Return: 0 or 1
 */

int palind3(char *s, int l)
{
	if (*s != *(s + 1))
	return (0);
	else if (*s == 0)
		return (1);
	return (palind3(s + 1, l - 2));
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: string
 * Return: a function that returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
