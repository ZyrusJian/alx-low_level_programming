#include "lists.h"

/**
 * print_list - prints all the elements of the list
 * @h: pointer to the list
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	const list_t *set;

	set = NULL;
	set = h;

	if (h->str == NULL)
		printf("[0] (nil)");

	while (set != NULL)
	{
		printf("[%d] %s\n", set->len, set->str);
		set = set->next;
	}
	return (sizeof(list_t));
}
