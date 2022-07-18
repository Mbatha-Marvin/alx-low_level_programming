#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: String
 * @needle: string being sort
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if(*b == 0)
	{
		return (char*)haystack;
	}

	for(; *haystack != 0; haystack += 1)
	{
		if(*haystack != *b)
		{
			continue;
		}

		a = haystack;

		while(1)
		{
			if(*b == 0)
			{
				return (char*)haystack;
			}
			if(*a++ != *b++)
			{
				break;
			}
		}

		b = needle;
	}

	return (0);
}