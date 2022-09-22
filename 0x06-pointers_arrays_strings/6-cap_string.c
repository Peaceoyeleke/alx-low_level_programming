#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 *
 * @str: string
 *
 * Return: Always 0
 */

char *cap_string(char *str)
{
	int index, j;

	char seperators[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index == 0 && str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[index] == seperators[j])
			{
				if (str[index + 1] >= 'a' && str[index] <= 'z')
				{
					str[index + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
