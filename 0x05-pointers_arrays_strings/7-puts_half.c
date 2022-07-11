#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be evaluated
 */

void puts_half(char *str)
{
	int len, n;

	len = strlen(str);

	if (len % 2 != 0)
		n = (len / 2) + 1;
	else
		n = (((len - 1) / 2) + 1);

	str += n;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
