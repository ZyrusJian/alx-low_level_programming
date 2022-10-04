#include "main.h"

int _strlen(char *str);

/**
 * _strncat - appends n-bytes of the string src to dest
 * @dest: The string target
 * @src: the string to be appended
 * @n: number os bytes to append
 *
 * Return: pointer to dest after appending.
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, lt, j;

	l1 = _strlen(dest);
	l2 = _strlen(src);
	lt = l1 + l2 + 1;

	j = 0;

	while (j < n && *src != '\0')
	{
		dest[l1 + j] = *src;
		j++;
		src++;
	}
	dest[lt - 1] = '\0';

	return (dest);
}

/**
 *  _strlen - gives the length of string.
 *  @str: target string
 *
 *  Return: length
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}
