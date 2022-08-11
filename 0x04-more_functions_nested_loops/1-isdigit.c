#include "main.h"

/**
 * _isdigit - checks if a charater is a digit
 * @c: integer input
 *
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isdigit(int c)
{
	int res;

	if (c <= '9' && c >= '0')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
