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

	while ((*head) != NULL)
	{
		set = (*head);
		(*head) = (*head)->next;
		free(set);
	}
	(*head) = NULL;

}
