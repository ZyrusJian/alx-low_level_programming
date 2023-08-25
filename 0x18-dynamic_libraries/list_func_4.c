#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	/* Implementation */
	char *dest_ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ptr);
}

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * Return: The pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/* Implementation */
	char *dest_ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest_ptr);
}
