#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}

	return (0);
}
