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

	while (num < 10)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
