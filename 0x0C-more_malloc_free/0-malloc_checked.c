#include "main.c"

/**
 * malloc_checked - function that allocates a memory using malloc
 * @b: size of memory block
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (*ptr == NULL)
		exit (98);

	return (ptr);
}
