#include "lists.h"


/**
 * get_nodeint_at_index - reterives nth node
 * @head: pointer to the existing list
 * @index: nth node
 *
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *set;
	unsigned int k;

	k = 0;
	if (head == NULL)
		return (NULL);

	set = head;
	while (k <= index)
	{
		if (set == NULL)
			return (NULL);
		if (k == index)
		{
			return (set);
		}
		set = set->next;
		k++;
	}
	return (NULL);
}

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

	if ((*head) == NULL)
		return (NULL);

	set = (*head);
	prv = (*head);

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = prv;
		(*head) = new;
	}
	if (idx > 0)
	{
		prv = get_nodeint_at_index((*head), idx - 1);
		set =  get_nodeint_at_index((*head), idx);
		if (prv == NULL)
			return (NULL);
		prv->next = new;
		new->next = set;
	}
	return (get_nodeint_at_index((*head), idx));
}
