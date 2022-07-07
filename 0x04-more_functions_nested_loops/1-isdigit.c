#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if a charater is a digit
 * @c: integer input
 *
 * Return: Always 1 (Success)
 */

int _isdigit(int c)
{
	int res;

	if (c <= 9 && c >= 0)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
