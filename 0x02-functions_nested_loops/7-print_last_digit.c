#include "main.h"

/**
 * print_last_digit - prints the last digit of given integer.
 *@n: target integer
 *
 * Return: ld after extracting last digit.
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	_putchar(ld);

	return (ld);
}
