#include "main.h"

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i < argc; i++)
	{
		if (strtol(argv[i], NULL, 10))
		{
			sum += strtol(argv[i], NULL, 10);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
