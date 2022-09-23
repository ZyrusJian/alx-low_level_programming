#include "main.h"

/**
 * string_toupper - chane all lowercase letter to uppercase.
 * @s: The string target
 *
 * Return: sum after comparing.
 */

char *string_toupper(char *s)
{
	int j;

	j = 0;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			s[j] = *s - 32;
			j++;
		}
		else
		{
			s++;
			j++;
			continue;
		}
		s++;
	}
	return (s);
}

