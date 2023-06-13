#include "main.h"

/**
 * *str_concat - combines two unkown size string using malloc
 * @s1: target string1 to be linked.
 * @s2: target string2 to be linked.
 *
 * Return: NULL if it fails or a pointer to the combined string on success.
 */

char *str_concat(char *s1, char *s2)
{
	char *strconc, *str;
	unsigned int size, i;

	if ((s1 == NULL) && (s2 == NULL))
	{
		str = "";
		return (str);
	}
	if ((s1 != NULL) && (s2 == NULL))
	{
		return (s1);
	}
	if ((s1 == NULL) && (s2 != NULL))
	{
		return (s2);
	}
	if ((s1 != NULL) && (s2 != NULL))
	{
		size = 1 + strlen(s1) + strlen(s2);
		strconc = (char *) malloc(size * sizeof(char));
		if (strconc == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < (1 + strlen(s1)); i++)
		{
			strconc[i] = s1[i];
		}
		for (i = strlen(s1); i < size; i++)
		{
			strconc[i] = s2[i - strlen(s1)];
		}
	}
	return (strconc);
}
