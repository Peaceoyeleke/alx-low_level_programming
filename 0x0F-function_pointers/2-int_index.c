#include "function_pointers.h"

/**
 * int_index - funtion that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to the function used to compare
 * Return: return 0 or 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
			{
				return (i);
			}
		}

		return (-1);
}
