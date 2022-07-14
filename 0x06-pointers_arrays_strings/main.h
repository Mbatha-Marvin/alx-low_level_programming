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

/**
 * rev_string - reverse a string
 * @s: pointer to the string
 */

void rev_string(char *s);

/**
 * puts2 - printrs every other character
 * @str: string pointer
 */

void puts2(char *str);

/**
 * puts_half - prints last half of a string
 * @str: string to be evaluated
 */

void puts_half(char *str);

/**
 * print_array - prints elements of an array
 * @a: array
 * @n length of the array
 */

void print_array(int *a, int n);

/**
 * _strcpy - copies the pointer
 * @dest: location to be copied to
 * @src: pointer to be copied
 *
 * Return: a pointer value stored in dest
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s);

/**
 * _strncat - concatenates strings
 * @dest: destination of file
 * @src: source file
 * @n: conditional length
 *
 * Return: pointer of resulting string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strcat - concatenate strings
 * @dest: file to append second file
 * @src: file to be appended
 *
 * Return: pointer to result
 */

char *_strcat(char *dest, char *src);

/**
 * _strncpy - copies a string
 * @dest: cpoy to this file
 * @src: copy from this file
 * @n: how far to copy
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n length of array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - convert to uppercase
 * Return: char pointer
 */

char *string_toupper(char *);

/**
 * cap_string - capitalize each word
 * @k: word strring
 *
 * Return: string
 */
char *cap_string(char *s);

/**
 * leet - encode a string to 1337
 * @s: string
 *
 * Return: string
 */

char *leet(char *s);

/**
 * rot13 - encode a string using rot13
 * @s: string
 *
 * Return: string
 */

char *rot13(char *s);

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);

#endif
