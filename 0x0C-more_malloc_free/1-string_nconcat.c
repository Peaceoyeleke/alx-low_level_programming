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
	unsigned int index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		n++;

	concat = malloc(sizeof(char) * (n + 1));

		if (concat == NULL)
			return (NULL);

		n = 0;

		for (index = 0; s1[index]; index++)
			concat[n++] = s1[index];

		for (index = 0; s2[index] && index < n; index++)
			concat[n++] = s2[index];

		concat[n] = '\0';

		return (concat);
}
