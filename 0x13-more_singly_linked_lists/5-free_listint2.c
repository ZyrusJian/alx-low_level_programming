#include "lists.h"

/**
 * free_listint2 - frees the list
 * @head: pointer to the existing list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *set;

	if (head == NULL)
		exit(0);

	set = (*head);

	while (set != NULL)
	{
		set = set->next;
		(*head)->next = NULL;
		free((*head));
		(*head) = set;
	}
	(*head) = NULL;

}
