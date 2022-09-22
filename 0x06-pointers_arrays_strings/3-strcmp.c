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

	do
	{
		if (*s1 == '\0')
		return (sum += *s1 - *s2);
		sum += *s1 - *s2;
		s1++;
		s2++;
	}
	while (*s1 == *s2);

	return (sum);
}

