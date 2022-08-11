#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _isupper - checks if a character is in upper case
 * @c: character input
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c);

/**
 * _isdigit - checks if input is a digit
 * @c: integer input
 *
 *Return: Always 1 (Success)
 */

int _isdigit(int c);

/**
 * mul - prints product of two inputs
 * @a: first input
 * @b: second input
 *
 * Return: Always 0 (Success)
 */

int mul(int a, int b);

/**
 * _putchar - writes the entered character
 * @c: charater input
 *
 * Return: Always 1 (Success)
 */

int _putchar(char c);

/**
 * print_numbers - prints numbers form 0 - 9
 */

void print_numbers(void);

/**
 * print_most_numbers - prints all single numbers except 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - prints the numbers 0 - 14 ten times
 */

void more_numbers(void);

/**
 * print_line - prints out lines
 * @n: number of lines to be printed
 */

void print_line(int n);

/**
 * print_diagonal - prints diagonal
 * @n: size of diagonal
 */

void print_diagonal(int n);

/**
 * print_square - prints squares
 * @size: size of square
 */

void print_square(int size);

/**
 * print_triangle
 * @size: size of the rtiangle
 */

void print_triangle(int size);

/**
 * print_number - Print an integer number
 * @n: integer
 */
void print_number(int n);

#endif
