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
		_putchar('%c', i);
	}

	_putchar('\n');

}
