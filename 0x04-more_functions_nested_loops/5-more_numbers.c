#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times
 */

void more_numbers(void)
{
	int i, n;

	for (n = 1; n < 11; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}

		_putchar('\n');
	}
}
