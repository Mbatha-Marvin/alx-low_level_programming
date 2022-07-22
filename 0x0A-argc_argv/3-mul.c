#include "main.h"

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: 0 on success else 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mul = num1 * num2;

		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
