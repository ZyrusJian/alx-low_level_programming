#include "main.h"

int _strlen(char *str);

/**
 * _strncpy - copies n-bytes of the string src to dest
 * @dest: The string target
 * @src: the string to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest after appending.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && *src != '\0')
	{
		dest[j] = *src;
		j++;
		src++;
	}
	dest[j] = '\0';

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
