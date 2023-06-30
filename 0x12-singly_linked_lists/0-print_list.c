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
	size_t k;

	set = NULL;
	set = h;
	k = 0;


	while (set != NULL)
	{
		k++;
		if (set->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", set->len, set->str);
		set = set->next;
	}
	return (k);
}
