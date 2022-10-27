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

	if (str != NULL)
	{
	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

		a->str = strdup(str);
		a->len = _strlen(str);
		a->next = NULL;

		if (*head == NULL)
		{
			*head = a;
			return (*head);
		}

	else
	{
		temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = a;
	return (temp);
	}
	}
	
	return (NULL);
}

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: string length
 */

int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}
