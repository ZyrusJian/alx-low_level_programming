#include "main.h"

/**
 * reverse_array - set contet of  array in reverse order
 * @a: The array target
 * @n: the size of array
 *
 */

void reverse_array(int *a, int n)
{
	int j, i;

	j = n - 1;
	i = 0;

	while (j > 0)
	{
		*(a + i) = *(a + i) + *(a + j);
		*(a + j) = *(a + i) - *(a + j);
		*(a + i) = *(a + i) - *(a + j);
		j--;
		i++;
	}

}
