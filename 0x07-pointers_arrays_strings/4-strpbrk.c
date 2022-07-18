#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string we are evaluating for the occurance of accept
 * @accept: bytes being located in s
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * 		   or NULL if no such byte is found
 */

char *_strpbrk (char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;
		while (*a != '\0')
			if (*a++ == *s)
			return (char *) s;
	++s;
	}

	return (0);
}