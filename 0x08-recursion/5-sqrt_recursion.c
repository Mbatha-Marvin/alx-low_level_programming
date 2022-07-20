#include "main.h"

/**
 * sqrt_check - checks for the square root of i
 * @guess: square root guess
 * @i: number to find squre root
 *
 * Return: square root or -1
 */

int sqrt_check(int guess, int i)
{
	if (guess * guess == i)
	{
		return (guess);
	}

	if (guess * guess > i)
	{
		return (-1);
	}

	return (sqrt_check((guess + 1), c));
}

/**
 * _sqrt_recursion - finds square root recursively
 * @n: value to find its square root
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (sqrt_check(1, n));
}
