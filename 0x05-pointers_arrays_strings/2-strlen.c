#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: string to be evaluated
 *
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
