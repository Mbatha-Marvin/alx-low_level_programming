#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: using the _putchar instead of built
 * function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str1[] = "_putchar\n";
	int length = strlen(str1);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(i);
	}

	return (0);
}
