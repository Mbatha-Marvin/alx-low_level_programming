#ifndef _MAIN_H_
#define _MAIN_H_

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
`
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
 * _putchar - prints out a charater
 *
 * Return: Always 0 (Success)
 */

int _putchar(char);

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

/**
 * set_string - set the string
 * 
 * @s: string
 * @to: result
 */
void set_string(char **s, char *to);

#endif
