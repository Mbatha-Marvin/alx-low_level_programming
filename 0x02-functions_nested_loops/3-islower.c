#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks if an input is a lower alphabet
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
