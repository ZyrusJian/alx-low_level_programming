#include "lists.h"

/**
 * delete_nodeint_at_index - reterives nth node
 * @head: pointer to the existing list
 * @index: nth node
 *
 * Return: 1 success and -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *set, *rmv, *prv;
	unsigned int k;
	int i;

	k = 0;
	if ((*head) == NULL)
		return (-1);

	set = (*head);
	while ((k != index) || (set != NULL))
	{
		set = set->next;
		k++;
	}
	prv = (*head);
	if ((k == index) && (set != NULL))
	{
		for (i = 0; i < k; i++)
			prv = prv->next;
		rmv = set;
		set = set->next;
		prv->next =set;
		rmv->next = NULL;
		free(rmv);
		return (1);
	}
	return (-1);
}
