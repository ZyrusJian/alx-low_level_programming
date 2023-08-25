#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing the characters to match
 *
 * Return: The number of characters in the initial segment of s that consist
 * only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	/* Implementation */
	unsigned int count = 0;

	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
		{
			count++;
			accept++;
		}
		else
		{
			break;
		}
		s++;
	}
	return (count);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing the characters to search for
 *
 * Return: A pointer to the first occurrence in s of any of the characters
 * in accept, or NULL if no such character is found
 */

char *_strpbrk(char *s, char *accept)
{
	/* Implementation */
	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}
	return (NULL);
}

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: A pointer to the first occurrence of the substring needle in the
 * string haystack, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	/* Implementation */
	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
