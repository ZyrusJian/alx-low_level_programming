#include "main.h"

/**
 * factorial - compute the factorial of a number
 * @n: target number
 *
 * Return: result of computation
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
