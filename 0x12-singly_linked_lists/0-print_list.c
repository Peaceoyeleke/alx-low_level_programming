#include "lists.h"

/**
 * print_list - prints all elements of the list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%s]\n", "[h->len] h->str");
		h = h->next;
		n += 1;
	}
		return (n);
}
