#include "function_pointers.h"

/**
 * array_iterator - fumtion that executes a function given as a parameter
 * on eachelement of an array
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
