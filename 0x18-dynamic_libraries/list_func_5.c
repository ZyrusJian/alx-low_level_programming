#include "main.h"

/**
 * _strncpy - copies a string, using at most n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: The pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* Implementation */
	char *dest_ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_ptr);
}

/**
 * _strcmp - compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	/* Implementation */
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
