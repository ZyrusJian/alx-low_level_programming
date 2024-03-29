#include "main.h"

/**
 * *_strdup - duplicates unkown size string using malloc
 * @str: target string to be duplicated.
 *
 * Return: NULL if it fails or a pointer to the duplicate on success.
 */

char *_strdup(char *str)
{
	char *strdup;
	unsigned int size, i;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 1 + strlen(str);

	strdup = (char *) malloc(size * sizeof(char));
	if (strdup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		strdup[i] = str[i];
	}
	return (strdup);
}
