#include "main.h"

int check_binary(const char *s);
int _powr(int x, int y);
const char *_reversebit(const char *s);

/**
 * binary_to_int - converts binary to unsigned int
 * @b: target string
 *
 * returm: int or 0 on fail
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	const char *binary;
	unsigned int num, bit;

	i =0;
	if (b == NULL)
		return (0);
	if (check_binary(b) == 0)
		return (0);
	binary = _reversebit(b);
	while (binary[i] != '\0')
	{
		bit = binary[i] * _powr(2, i);
		num += bit;
		i++;
	}
	return (num);
}

/**
 * check_binary - checks string is madeup of only 0 and 1
 * @s: target string
 *
 * return: 1 on succes and 0 on fail
 */

int check_binary(const char *s)
{
	while (*s != '\0')
	{
		if ((*s != '0') || (*s != '1'))
			return (0);
		s++;
	}
	return (1);
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
 * _reversebit - reverse binary string
 * @s: target string
 *
 * return: reverse string
 */

const char *_reversebit(const char *s)
{
	if (*s)
	{
		return (_reversebit(s + 1));
	}
	return (NULL);
}
