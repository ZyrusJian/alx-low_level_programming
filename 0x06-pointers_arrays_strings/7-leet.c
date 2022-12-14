#include "main.h"

/**
 * leet - encodes the strings in to 1337
 * @s: The string target
 *
 * Return: s after computing.
 */

char *leet(char *s)
{
	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
		{
			*s = 4 + '0';
		}
		else if (*s == 'e' || *s == 'E')
		{
			*s = 3 + '0';
		}
		else if (*s == 'o' || *s == 'O')
		{
			*s = 0 + '0';
		}
		else if (*s == 't' || *s == 'T')
		{
			*s = 7 + '0';
		}
		else if (*s == 'l' || *s == 'L')
		{
			*s = 1 + '0';
		}
		else
		{
			s++;
			continue;
		}
		s++;
	}
	return (s);
}

