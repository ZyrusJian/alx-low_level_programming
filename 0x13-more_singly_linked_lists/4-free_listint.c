#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer to the existing list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *set;

	if (head == NULL)
		exit(0);

	set = head;

	while (set != NULL)
	{
		set = set->next;
		free(head);
		head = set;
	}
	head = NULL;
	if (head == NULL)
		exit(0);
}
