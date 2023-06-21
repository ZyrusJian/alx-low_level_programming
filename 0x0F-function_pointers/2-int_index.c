#include <stdio.h>

/**
 * int_index - iterates given array and return array index
 * @array: target
 * @cmp: function pointer
 * @size: array size
 *
 * Return: index for success and -1 for error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || (size <= 0))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
