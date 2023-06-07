#include "main.h"

int _sqrt_gues(int n, int a);

/**
 * _sqrt_recursion - compute the square root of a number
 * @n: target number
 *
 * Return: result of computation
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt_gues(n, 1));
}

/**
 * _sqrt_gues - compute the square root of a number
 * @n: target number
 * @a: number of guess
 *
 * Return: result of computation
 */

int _sqrt_gues(int n, int a)
{
	if (a * a > n)
		return (-1);

	if (a * a == n)
		return (a);

	return (_sqrt_gues(n, (a + 1)));
}
