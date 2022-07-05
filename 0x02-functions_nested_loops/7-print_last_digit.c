#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: integer input to be evaluated
 *
 * Description: Prints out the last digit of the input
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last *= -1

	_putchar(last + '0');

	return (last);
}
