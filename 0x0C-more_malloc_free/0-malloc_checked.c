#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory.
 *
 * Return: exit with 98 if it fails or a pointer to the memory on success.
 */

void *malloc_checked(unsigned int b)
{
	void *memalloc = malloc(b);

	if (memalloc == NULL)
	{
		exit(98);
	}

	return (memalloc);
}
