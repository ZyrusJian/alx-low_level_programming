#include "main.h"

/**
 * decimal_to_binary - Converts a decimal number to binary
 * @n: The decimal number to be converted
 *
 * Return: The binary representation of the decimal number
 */

unsigned long int decimal_to_binary(unsigned long int n)
{
	if (n == 0)
		return (0);

	unsigned long int binary = 0, base = 1;

	while (n > 0)
	{
		if (n & 1)
			binary += base;

		n >>= 1;
		base *= 10;
	}
	return (binary);
}

/**
 * print_binary - Prints the binary representation of a decimal number
 * @n: The decimal number to be printed in binary form
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary = decimal_to_binary(n);
	int i, bitcount;

	bitcount = 0;

	while (binary != 0)
	{
		binary /= 10;
		bitcount++;
	}
	for (i = bitcount; i >= 0; i--)
	{
		_putchar((binary >> i) & 1 ? '1' : '0');
	}
}
