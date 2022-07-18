#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string being compared to accept
 * @accept: bytes being checked
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn (char *s,char *accept)
{
	char *s1 = s;
	char *c;

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c == '\0')
			break;
		s++;
	}

	return s - s1;
}