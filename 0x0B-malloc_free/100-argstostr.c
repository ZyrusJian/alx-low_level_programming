#include "main.h"

/**
 * *argstostr - combines all arguments into one string using malloc
 * @ac: number of args to be linked.
 * @av: args to be linked.
 *
 * Return: NULL if it fails or a pointer to the combined string on success.
 */

char *argstostr(int ac, char **av)
{
	char *strconc, *nline, *end;
	int size, i, j;

	if ((ac <= 0) || (av == NULL))
	{
		return (NULL);
	}
	/* calculate toal mem to be allocated and check malloc return */
	size = 0;
	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]) + 1;
	}
	strconc = (char *) malloc(size * sizeof(char));
	if (strconc == NULL)
	{
		return (NULL);
	}
	/* combine args in to string in the allocated mem */
	size = 0;
	nline = "\n";
	end = "\0";
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			strconc[size++] = av[i][j];
		}
		strconc[size++] = *nline;
	}
	strconc[size++] = *end;
	return (strconc);
}
