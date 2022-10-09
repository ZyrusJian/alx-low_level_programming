#include <stdio.h>

/**
 * _memset - fils mem_area pointed by s in its first n bytes with b.
 * @s: mem_area pointer
 * @b: constant value
 * @n: value mem_size
 *
 * Return: On success s .
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
