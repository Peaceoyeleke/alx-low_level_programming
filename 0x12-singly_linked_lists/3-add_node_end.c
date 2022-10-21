#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *temp;
	size_t n;

	a = malloc(sizeof(list_t));

	if (a == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
	{
		a->len = n;
		a->next = NULL;
		temp = *head;

	if (temp == NULL)
	{
		*head = a;
	}
	else

	while (temp->next)
		temp = temp->next;

	temp->next = a;
	}

	return (*head);
}
