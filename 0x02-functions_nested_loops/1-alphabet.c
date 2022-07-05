#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints out the alphabet
 * in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_puthchar('\n');

	return (0);
}
