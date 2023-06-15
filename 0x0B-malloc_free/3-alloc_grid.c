#include "main.h"

void _free(int **arr, int height);

/**
 * **alloc_grid - creates a 2d array of unkown size using malloc
 * @width: column of the 2d array.
 * @height: rows of the 2d array.
 *
 * Return: NULL if it fails or a pointer to the array on success.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	/* allocate 2d array memory dynamically */
	/* check malloc's return */
	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	/* initialize 2d array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (arr == NULL)
	{
		_free(arr, height);
		return (NULL);
	}
	_free(arr, height);
	return (arr);
}
/**
 * _free - free the 2d array memory allocation
 * @arr: 2d array.
 * @height: rows of the 2d array.
 *
 */
void _free(int **arr, int height)
{
	int i;
	/* free allocated memory */
	for (i = 0; i < height; i++)
	{
		free(arr[i]);
	}
	free(arr);
}
