#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to the existing list
 *
 */

void free_list(list_t *head)
{
	list_t *set;

	if (head == NULL)
		exit(0);

	set = head;

	while (set != NULL)
	{
		set = set->next;
		free(head->str);
		free(head);
		head = set;
	}
}
