#include "main.h"

/**
 * _strlen_recursion - size
 * @s: string
 * Return: recursion
 */

int _strlen_recursion(char*s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * @p1 - pallindrome
 * @s: string
 * @l: position
 * Return: 0 or 1
 */

int p1(char *s, int l)
{
	if (l < 1)
{
	return (1);
}

if (*s == *(s + 1))
{
	return (p1(s + 1, l - 2));
}
return (0);
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: string
 * Return: a function that returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (p(s, len - 1));
}
