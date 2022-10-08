#include "main.h"

/**
 * _realloc - reallocates a memory
 * @ptr: pointer to the memory
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: pointer to memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;
	unsigned int i;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		return (array);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
	array = malloc(new_size);
	if (array != NULL)
	{
		for (i = 0; i < min(old_size, new_size); i++)
			*((char *)array + i) = *((char *) ptr + i);
		free(ptr);
		return (array);
	}
	else
		return (NULL);
	}
}
