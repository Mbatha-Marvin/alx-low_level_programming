#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: append source to this
 * @src: string to be appended
 *
 * Return: pointer to the result
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	for (i = 0; dest[i]; i++)
	{
		len++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[len++] = src[i];
	}

	return (dest);
}
