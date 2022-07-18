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

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: size of the buffer
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index);

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: memory area to
 * @src:  memory are from
 * @n: bytes to br copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be evaluated
 * @c: character being sort
 *
 * Return:  pointer to the first occurrence of the character c in the string
 *          or NULL if the character is not found
 */

char *_strchr(char *s, char c);

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string being compared to accept
 * @accept: bytes being checked
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string we are evaluating for the occurance of accept
 * @accept: bytes being located in s
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * 		   or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: String
 * @needle: string being sort
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: an array to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size);

#endif