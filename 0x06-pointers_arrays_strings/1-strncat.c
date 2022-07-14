#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: append on this string
 * @src: to be appended on dest string
 * @n: numbers of bytes from src
 * 
 * Return: pointer to the result
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;
	len = 0;

	for (i = 0; dest[i]; i++)
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}

	return (dest);

}