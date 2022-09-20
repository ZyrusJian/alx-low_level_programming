#include "main.h"

/**
 * _strlen - computes the length of given string.
 * @s: string to be evaluated.
 *
 * Return: len of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
