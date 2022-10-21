#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
