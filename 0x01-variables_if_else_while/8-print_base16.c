#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: prints all single numbers of the hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int c;
	int x = 'A';

	while (num < 10)
	{
		c = num + '0';
		putchar(c);
		num++;
	}

	while (x <= 'F')
	{
		putchar(tolower(x));
		x++;
	}

	putchar('\n');

	return (0);
}
