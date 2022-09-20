#include "main.h"

/**
 * rev_string - writes the string s to stdout in reverse
 * @s: The string to print
 *
 */

void rev_string(char *s)
{
	char i;
	char c[];
	int j;

	i = *s;
	
	while (*s != '\0')
	{
		s++;
	}

	j = 0;

	while (*s != i )
	{
		c[j] = *s;
		j++;
		s--;
	}
	s = c;
	_putchar('\n');
}
