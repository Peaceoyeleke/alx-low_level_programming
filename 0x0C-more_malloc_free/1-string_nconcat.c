#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes allocated to memory
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	concat = malloc(sizeof(char) * (i + n + 1));

	if (concat == NULL)
	{
		return (0);
	}

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	for (; k < (i + n); k++)
	{
		concat[k] = s2[k - i];
	}
	concat[k] = '\0';

	return (concat);
}
