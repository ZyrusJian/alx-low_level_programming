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
	while ((k != index) || (set != NULL))
	{
		set = set->next;
		k++;
	}
	if ((k == index) && (set != NULL))
	{
		return (set);
	}
	return (NULL);
}
