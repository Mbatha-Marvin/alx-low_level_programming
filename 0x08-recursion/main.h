#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _puts_recursion - uses recursion to print strings
 * @s: string to be printed recursively
 *
 * Return: nothing
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string recursively in reverse
 * @s: string to be printed in reverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s);

/**
 * _putchar - prints a character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */

int _putchar(char c);

/**
 * _strlen_recursion - finds lenght of a string recursively
 * @s: string to evaluate
 *
 * Return: Always (0) success
 */

int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of value stored in n
 * @n: value to find its factorial
 *
 * Return: the factorial
 * -1 if value of n less than 0
 */

int factorial(int n);

#endif
