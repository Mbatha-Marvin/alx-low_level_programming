#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		if (x == 'Z')
		{
			putchar(tolower(x) + "\n")
		}
		else if (x < 'Z')
		{
			putchar(tolower(x));
		}
		x++;
	}

	return (0);
}
