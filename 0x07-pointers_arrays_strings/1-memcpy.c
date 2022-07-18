#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: memory area to
 * @src:  memory are from
 * @n: bytes to br copied
 *
 * Return: pointer to dest
 */

char *_memcpy (char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	while (n--)
		*d++ = *s++;
	return dest;
}