#include "main.h"
#include <string.h>

/**
 * print_rev - trints the reverse of a string
 * @s: the string input
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
