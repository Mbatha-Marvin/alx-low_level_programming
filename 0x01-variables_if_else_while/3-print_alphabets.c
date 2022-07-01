#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lower and uppercase
 *
 *Return: Always 0 (Succes)
 */

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		x++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
