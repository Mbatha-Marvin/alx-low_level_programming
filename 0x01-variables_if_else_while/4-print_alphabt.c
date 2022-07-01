#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		if (x == 'Q' || x == 'E')
		{
			x++;
		}
		else
		{
			putchar(tolower(x));
			x++;
		}


	}

	putchar('\n');

	return (0);
}
