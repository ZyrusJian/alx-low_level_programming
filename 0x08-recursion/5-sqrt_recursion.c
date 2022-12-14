#include "main.h"

int _powr(int x, int y);
int _guess(int k, int n);

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
		return (-1);
	if ((_guess(0, n)) == n)
		return (_guess(0, n));
	return (-1);
}

/**
 * _powr - compute x raised to power of y
 * @x: base no.
 * @y: power to raise
 *
 * Return: result of computation
 */

int _powr(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _powr(x, y - 1));
}

/**
 * _guess- guess the square root of number
 * @k: initial number
 * @n: number to compute sqare root
 *
 * Return: square root guess
 */

int _guess(int k, int n)
{
	if ((_powr(k + 1, 2)) <= n)
		_powr(k + 1, 2);

	return (1 *_guess(k + 1, n);
}
