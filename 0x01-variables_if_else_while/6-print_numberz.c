#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints out single digit decimal numbers too
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
		num++;
	}

	putchar('\n');

	return (0);
}
