#include "main.h"

/**
 * _abs - Entry point
 * @n: takes in an integer
 *
 * Description: converts integers to absolute values
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	return (n);
}
