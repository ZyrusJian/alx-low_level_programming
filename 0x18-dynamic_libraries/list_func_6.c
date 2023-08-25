#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to fill with
 * @n: The number of bytes to fill
 *
 * Return: The pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* Implementation */
	char *s_ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s_ptr);
}

/**
 * _memcpy - copies memory area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Implementation */
	char *dest_ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest_ptr);
}

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	/* Implementation */
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
