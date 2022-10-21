#include "lists.h"

/**
 * add_node_end - adds a node to the list
 * @head: pointer to the existing list
 * @str: new list element component
 *
 * Return: first node pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *set;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(new->str);
		new->next = NULL;
	}
	else
	{
		return (NULL);
	}

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
