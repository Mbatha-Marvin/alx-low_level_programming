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

/**
 * _pow_recursion - finds the power of a number recursively
 * @x: base value
 * @y: power value
 *
 * Return: power of x
 * else -1 if y < 0
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - finds squareroot recursively
 * @n: value being evaluated
 *
 * Return: squareroot or -1 if natural sqrt doesn't exist
 */

int _sqrt_recursion(int n);

/**
 * sqrt_check - checks for square root of i
 * @guess: guess of square root
 * @i: number to find square root
 *
 * Return: square root of i or -1
 */

int sqrt_check(int guess, int i);

/**
 * prime_num_check - checks if number is a prime number
 * @f: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime else 0
 */

int prime_num_check(int f, int p);

/**
 * is_prime_number - finds out if an integer is a prime number
 * @n: integer being valuated
 *
 * Return: 1 if prime number else 0
 */

int is_prime_number(int n);

int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
char *wildcard(char *s3, char *s4);
#endif
