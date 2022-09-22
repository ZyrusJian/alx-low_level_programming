#include "main.h"

/**
 * _strcmp - compare the strings s1 to s2
 * @s1: The string target
 * @s2: the string target
 *
 * Return: sum after comparing.
 */

int _strcmp(char *s1, char *s2)
{
	int sum;

	sum = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		sum += *s1 - *s2;
		s1++;
		s2++;
	}

	return (sum);
}

