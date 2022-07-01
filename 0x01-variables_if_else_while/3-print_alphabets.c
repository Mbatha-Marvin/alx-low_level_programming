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
	int y = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');

	return (0);
}
