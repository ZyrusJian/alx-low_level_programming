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
 * delete_nodeint_at_index - reterives nth node
 * @head: pointer to the existing list
 * @index: nth node
 *
 * Return: 1 success and -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *set, *rmv, *prv;

	if ((*head) == NULL)
		return (-1);

	set = (*head);
	prv = (*head);
	rmv = get_nodeint_at_index((*head), index);
	prv = get_nodeint_at_index((*head), index - 1);
	set = get_nodeint_at_index((*head), index + 1);
	if ((rmv == NULL) || (prv == NULL) || (set == NULL))
		return (-1);
	prv->next = set;
	rmv->next = NULL;
	free(rmv);
	return (1);
}
