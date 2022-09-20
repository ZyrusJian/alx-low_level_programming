#include "main.h"

/**
 * rev_string - writes the string s to stdout in reverse
 * @s: The string to print
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s = s - i;

	j = 0;

	while (i > 0)
	{
		s[j] = *(s + (i - 1));
		j++;
		i--;
	}
	_putchar('\n');
}
