#include "main.h"

/**
 * array_range - creates an array o integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to nely allocated memor
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof (int) * ((max - min) + ));
	
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
	}
	else
		return (NULL);
}	
