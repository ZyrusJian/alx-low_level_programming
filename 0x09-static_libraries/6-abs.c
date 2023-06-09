#include "main.h"

/**
 * _abs - computes the absolute value of given integer.
 *@n: target integer
 *
 * Return: absval after computing.
 */

int _abs(int n)
{
	int absval;

	absval = ((n < 0) ? (-n) : (n));

	return (absval);
}
