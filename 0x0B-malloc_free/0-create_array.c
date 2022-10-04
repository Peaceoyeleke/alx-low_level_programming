#include "main.h"

/**
 * create_array - creates an arrary o chars and initializes it
 * @c: character
 * @size: number of bytes
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

		if (size == 0)
			return (NULL);

		array = malloc(sizeof(*array) * size);

		if (array == NULL)
			return (NULL);

		for (n = 0; n < size; n++)
			array[n] = c;

		return (array);
}
