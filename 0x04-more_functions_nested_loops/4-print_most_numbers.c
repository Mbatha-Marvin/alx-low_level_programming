#include "main.h"

/**
 * print_numbers - prints from 0 - 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
			_putchar(i + '0');
	}

	_putchar('\n');

}
