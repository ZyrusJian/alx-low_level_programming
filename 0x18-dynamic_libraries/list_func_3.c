#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: The buffer to copy to
 * @src: The string to copy
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	/* Implementation */
	char *dest_ptr = dest;

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
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of s
 */

int _atoi(char *s)
{
	/* Implementation */
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
