#include "main.h"

/**
 * _isalpha - Entry point
 * @c: integer input to be checked
 *
 * Description: checks if input character is an alphabet
 *
 * Return: Always 1 (Success)
 */

int _isalpha(int c)
{
	int i;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
