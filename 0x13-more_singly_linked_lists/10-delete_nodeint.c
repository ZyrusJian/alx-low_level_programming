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
	unsigned int k, i;

	k = 0;
	if ((*head) == NULL)
		return (-1);

	set = (*head);
	prv = (*head);
	while (k <= index)
	{
		if (set == NULL)
			return (NULL);
		if (k == index)
		{
			for (i = 0; i < k; i++)
				prv = prv->next;
			rmv = set;
			set = set->next;
			prv->next = set;
			rmv->next = NULL;
			free(rmv);
			return (1);
		}
		set = set->next;
		k++;
	}
	return (-1);
}
