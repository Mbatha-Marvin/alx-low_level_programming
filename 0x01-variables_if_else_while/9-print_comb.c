#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints formated numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int c;

	while (num < 10)
	{
		c = num + '0';
		putchar(c);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}
	putchar('\n');

	return (0);
}
