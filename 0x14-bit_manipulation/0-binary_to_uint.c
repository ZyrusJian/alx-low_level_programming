#include "main.h"

int check_binary(const char *s);
int _powr(int x, int y);
char *_reversebit(const char *s);

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: target string
 *
 * Return: int or 0 on fail
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	char *binary;
	unsigned int num, bit;

	i = 0;
	num = 0;
	if (b == NULL)
		return (0);
	if (check_binary(b) == 0)
		return (0);
	binary = _reversebit(b);
	if (binary == NULL)
		return (0);
	while (binary[i] != '\0')
	{
		bit = (binary[i] - '0') * _powr(2, i);
		num += bit;
		i++;
	}
	return (num);
}

/**
 * check_binary - checks string is madeup of only 0 and 1
 * @s: target string
 *
 * Return: 1 on succes and 0 on fail
 */

int check_binary(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != '0') && (s[i] != '1'))
			return (0);
		i++;
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
 * Return: reverse string
 */

char *_reversebit(const char *s)
{
	char *swap;
	int i, len;

	i = 0;
	len = strlen(s);
	swap = malloc(len * sizeof(char));
	if (*s)
	{
		while (s[i] != '\0')
		{
			swap[i] = s[len-1];
			i++;
			len--;
		}

		return (swap);
	}
	return (NULL);
}
