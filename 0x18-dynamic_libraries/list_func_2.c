#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	/* Implementation */
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of s
 */

int _strlen(char *s)
{
	/* Implementation */
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _puts - writes a string to stdout
 * @s: The string to write
 */

void _puts(char *s)
{
	/* Implementation */
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
