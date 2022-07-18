#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	const unsigned char uc = b;
	char *su;
	for(su = s;0 < n;++su,--n)
		*su = uc;
	return s;
}