#include "main.h"

/**
 * print_sign - Entry point
 * @n: integer to be evaluated
 *
 * Description: Checks if a number is positive or negative
 *
 * Returns: Always 1 (Success)
 */

int print_sign(int n)
{
	int res;
	char sign;
	if (n > 0)
	{
		sign = '+';
		res = 1;
	}
	else if (n == 0)
	{
		sign = '0';
		res = 0;
	}
	else if (n < 0)
	{
		sign = '-';
		res = -1;
	}

	_putchar(sign);

	return (res);
}
