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
	int i;
	unsigned int size;

	size = 1 + strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}

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
