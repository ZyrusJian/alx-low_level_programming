#include "main.h"

/**
 * *create_array - creates an array of unkown size using malloc
 * @c: target character to initialize array to.
 * @size: size of the array to be dynamically allocated
 *
 * Return: NULL if it fails or a pointer to the array on success.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}
