#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * reset_to_98 - resets the value of an integer to 98 using pointers
 * @n: the address of the value to be changed
 *
 * Return: nothing
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps two integers using their addresses
 * @a: first address
 * @b: second address
 *
 * Return: nothing
 */

void swap_int(int *a, int *b);

/**
 * _strlen - returns length of a string
 * @s: address of string to be evaluated
 *
 * Return: the lenth of the string
 */

int _strlen(char *s);

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str);

/**
 * print_rev - prints the reverse of a string
 * @s: string to be reversed
 *
 * Return: nothing
 */

void print_rev(char *s);

/**
 * _putchar - prints out a charater
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

#endif
