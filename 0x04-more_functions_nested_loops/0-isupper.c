/**
 * _islower - checks whether a character is lower case.
 * @c: character to be checked.
 *
 * Return: 1 for true. 0 for false.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
