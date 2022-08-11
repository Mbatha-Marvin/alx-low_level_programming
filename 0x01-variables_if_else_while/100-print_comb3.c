#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combinations of two using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int c;
	int d;

	for (x = 0; x <= 8; x++)
	{
		c = x + '0';

		for (y = x + 1; y <= 9; y++)
		{
			d = y + '0';
			putchar(c);
			putchar(d);

			if (x == 8 && y == 9)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
