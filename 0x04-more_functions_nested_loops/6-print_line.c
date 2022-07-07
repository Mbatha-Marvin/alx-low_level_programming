#include "main.h"

/**
 * print_line - prints lines
 * @n: length of line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		continue;
	}
	else
	{
		for (i = 0; i <= n; n++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
