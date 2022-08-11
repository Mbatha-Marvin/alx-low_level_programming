#include "main.h"

/**
 * factorial - returns factorial of value in n
 * @n: factorial being sort
 *
 * Return: the factorial or -1 if value of n is < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
