#include "main.h"

/**
 * decimal_to_binary - Converts a decimal number to binary
 * @n: The decimal number to be converted
 *
 * Return: The binary representation of the decimal number
 */

unsigned long int decimal_to_binary(unsigned long int n)
{
	unsigned long int binary, base;

	if (n == 0)
	{
		binary = 0;
		return (binary);
	}

	binary = 0;
	base = 1;

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
	unsigned long int binary, bit, temp;
	int i, bitcount;

	binary = decimal_to_binary(n);
	bitcount = 0;

	if (binary == 0)
		_putchar('0');

	temp = binary;
	while (temp != 0)
	{
		bitcount++;
		temp >>= 1;
	}
	for (i = bitcount - 1; i > 0; i--)
	{
		temp = binary;
		bit = ((temp >> i) & 1);
		_putchar(bit ? '1' : '0');
	}
}
