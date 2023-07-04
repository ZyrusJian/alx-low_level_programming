#include "lists.h"

/**
 * add_nodeint - adds a node to the list
 * @head: pointer to the existing list
 * @n: new list element component
 *
 * Return: first node pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = NULL;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	*head = new;

	return (*head);
}
