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
	unsigned int i, j, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s1[j] != '\0'; j++)

			if (n > j)
				n = j;

	concat = malloc(sizeof(char) * (i + n + 1));

		if (concat == NULL)
		{
			return (0);
		}


		for (index = 0; index < i; index++)
			concat[index] = s1[index];

		for (index = 0; index < (i + n); index++)
		{
			concat[index] = s2[index - i]);
		}

		concat[index] = '\0';

		return (concat);
}
