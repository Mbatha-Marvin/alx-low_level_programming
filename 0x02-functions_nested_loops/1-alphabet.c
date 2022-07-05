#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints out the alphabet
 * in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		j = i + '0';
		_putchar(j);
	}

	_putchar('\n');

	return (0);
}
