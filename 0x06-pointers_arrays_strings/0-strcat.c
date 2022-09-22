#include "main.h"

int _strlen(char *str);

/**
 * _strcat - appends the string src to dest
 * @dest: The string target
 * @src: the string to be appended
 *
 * Return: pointer to dest after appending.
 */

char *_strcat(char *dest, char *src)
{
	int l1, l2, lt;

	l1 = _strlen(*dest);
	l2 = _strlen(*src);
	lt = l1 + l2 + 1;

	char catstr[lt];
	int j = 0;

	while (*dest != '\0')
	{
		catstr[j] = *dest;
		j++;
		dest++;
	}

	while (*src != '\0')
	{
		catstr[j] = *src;
		j++;
		src++;
	}
	catstr[lt - 1] = '\0';

	return (*dest = &catstr);
}

/**
 *  _strlen - gives the length of string.
 *  @str: target string
 *
 *  Return: length
 */

int _strlen(char *str)
{
	int i;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}
