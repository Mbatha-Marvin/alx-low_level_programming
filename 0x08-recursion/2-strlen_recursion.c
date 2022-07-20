#include "main.h"

/**
 * _strlen_recursion - finds string length recursively
 * s: string to evaluate
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s -- 0)
	{
		return (0);
	}

	return (_str_recursion(s + 1) + 1);
}
