#include "lists.h"

/**
 * add_node - adds a node to the list
 * @head: pointer to the existing list
 * @str: new list element component
 *
 * Return: first node pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = NULL;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = (*head);
	*head = new;

	return (*head);
}
