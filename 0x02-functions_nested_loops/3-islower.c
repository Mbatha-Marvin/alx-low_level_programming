#include "main.h"

/**
 * _islower - Entry point
 * @c: integer input of character
 * Description: checks if an input is a lower alphabet
 *
 * Return: Always 1 (Success)
 */

int _islower(int c)
{
	int res;

	if (c <= 'z' && c >= 'a')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
