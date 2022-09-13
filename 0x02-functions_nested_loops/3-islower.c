/**
 * _islower - checks whether a character is lower case.
 * @c: character to be checked.
 *
 * Return: 1 for true. 0 for false.
 */

int _islower(int c)
{
	char c;
	int i;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
