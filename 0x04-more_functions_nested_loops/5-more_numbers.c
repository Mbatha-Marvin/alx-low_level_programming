#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times
 */

void more_numbers(void)
{
	int i, j, k, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				j = i / 10;
				k = i % 10;

				_putchar(j + '0');
				_putchar(k + '0');
			}
			else
				_putchar(i + '0');
		}

		_putchar('\n');
	}
}
