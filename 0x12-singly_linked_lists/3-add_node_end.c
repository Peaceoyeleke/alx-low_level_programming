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
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));

	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = a;

	return (a);
}
