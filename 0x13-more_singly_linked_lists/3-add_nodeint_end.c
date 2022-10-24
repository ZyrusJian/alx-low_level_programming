#include "lists.h"

/**
 * add_nodeint_end - adds a node to the list
 * @head: pointer to the existing list
 * @n: new list element component
 *
 * Return: first node pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new, *set;

	set = NULL;
	new = NULL;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		set = (*head);
		while (set->next != NULL)
		{
			set = set->next;
		}
		set->next = new;
		set = set->next;
	}
	return (*head);
}
