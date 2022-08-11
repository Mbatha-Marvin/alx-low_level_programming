#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 * @c: integer to inspect
 *
 * Description: checks if an input is uppercase alphabet
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	int res;

	if (c <= 'Z' && c >= 'A')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
