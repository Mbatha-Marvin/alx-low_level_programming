#include "main.h"

/**
 * _pow_recursion - finds the power of a number recursively
 * @x: base value
 * @y: power value
 *
 * Return: power of x
 * else -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * (_pow_recursion(x, (y - 1))));
}
