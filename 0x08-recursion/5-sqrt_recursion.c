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
	int ans;
	ans = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (-1);
	ans = _guess(1, n);
	if (ans == n)
		return (ans);
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
 * return: square root guess
 */

int _guess(int k, int n)
{
	if ((_powr(k, 2)) < n)
		_guess(k + 1, n);
	return (_powr(k,2));
}
