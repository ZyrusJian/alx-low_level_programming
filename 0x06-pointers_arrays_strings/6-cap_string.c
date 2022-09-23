#include "main.h"

/**
 * cap_string - capitalize all words.
 * @s: The string target
 *
 * Return: s after computing
 */

char *cap_string(char *s)
{
	if (*s >= 97 && *s <= 122)
		s[0] = *s - 32;

	while (*s != '\0')
	{
		switch (*s)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case '.':
			case ';':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				s++;
				if (*s >= 97 && *s <= 122)
					*s = *s - 32;
				s++;
				break;
			default:
				s++;
				break;
		}
	}
	return (s);
}

