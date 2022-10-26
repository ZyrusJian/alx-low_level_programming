#include "lists.h"

/**
 * insert_nodeint_at_index - reterives nth node
 * @head: pointer to the existing list
 * @idx: nth node
 * @n: new data
 *
 * Return: pointer to nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *set, *new, *prv;
	unsigned int k, i;

	k = 0;
	if ((*head) == NULL)
		return (NULL);

	set = (*head);
	prv = (*head);

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	while (k <= idx)
	{
		if (set == NULL)
			return (NULL);
		if (k == idx)
		{
			for (i = 0; i < k; i++)
				prv = prv->next;
			prv->next = new;
			new->next = set;
			return (new);
		}
		set = set->next;
		k++;
	}
	return (NULL);
}
