#include "main.h"

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
	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
	}
	/* check malloc's return */
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		if (arr[i] == NULL)
		{
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
	return (arr);
}
