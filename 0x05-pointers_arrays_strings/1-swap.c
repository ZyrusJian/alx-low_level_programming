#include "main.h"

/**
 * swap_int - swaps value of variable a to b and vice-versa.
 * @a: variable to be evaluated.
 * @b: variable to be evaluated.
 *
 */

void swap_int(int *a, int *b)
{
	int *x;
	*x = *a;

	*a = *b;
	*b = *x;
}
