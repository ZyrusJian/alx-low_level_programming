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
	listint_t *set, *new;
	unsigned int k;

	k = 0;
	if ((*head) == NULL)
		return (NULL);

	set = (*head);
	while ((k != idx) || (set != NULL))
	{
		set = set->next;
		k++;
	}
	if ((k == idx) && (set != NULL))
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = set;
		set = new;
		return (set);
	}
	return (NULL);
}
