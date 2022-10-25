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

	while (head != NULL)
	{
		set = head;
		head = head->next;
		free(set->next);
		free(set);
	}

}
