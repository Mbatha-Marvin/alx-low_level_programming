#include "main.h"

/**
 * prime_num_check - checks if number is prime
 * @f: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime else 0
 */

int prime_num_check(int f, int p)
{
	if (p < 2 || p % f == 0)
	{
		return (0);
	}
	else if (f > (p / 2))
	{
		return (1);
	}
	else
	{
		return (prime_num_check((f + 1), p));
	}
}

/**
 * is_prime_number - finds out if number is prime
 * @n: number to be checked
 *
 * Return: 1 if prime else  0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (prime_num_check(2, n));
}
