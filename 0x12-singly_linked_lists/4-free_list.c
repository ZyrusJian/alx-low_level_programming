#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to the existing list
 *
 */

void free_list(list_t *head)
{
	list_t *new, *set;

	if (head == NULL)
		exit(0);

	set = head;
	new = NULL;

	while (set->next != NULL)
	{
		set = set->next;
	}
	new = set;
	free(new);

}
