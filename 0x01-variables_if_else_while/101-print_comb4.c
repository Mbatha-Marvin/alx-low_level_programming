#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the least combination of 3 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, c, d, e;

	for (i = 0; i <= 7; i++)
	{
		c = i + '0';
		for (j = i + 1; j <= 8; j++)
		{
			d = j + '0';
			for (k = j + 1; k <= 9; k++)
			{
				e = k + '0';
				putchar(c);
				putchar(d);
				putchar(e);

				if (i == 7 && j == 8 && k == 9)
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
	}

	putchar('\n');

	return (0);
}
