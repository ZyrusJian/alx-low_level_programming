#include <stdio.h>

/**
 * array_iterator - iterates given array
 * @array: target
 * @action: function pointer
 * @size: array size
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || !size)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
