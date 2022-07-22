#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the entered character
 * @c: charater input
 *
 * Return: Always 1 (Success)
 */

int _putchar(char c);

/**
 * _isdigit - checks if input is a digit
 * @c: integer input
 *
 *Return: Always 1 (Success)
 */

int _isdigit(int c);

/**
 * _isupper - checks if a character is in upper case
 * @c: character input
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c);

/**
 * _strlen - returns length of a string
 * @s: address of string to be evaluated
 *
 * Return: the lenth of the string
 */

int _strlen(char *s);


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
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string we are evaluating for the occurance of accept
 * @accept: bytes being located in s
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: String
 * @needle: string being sort
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle);


/**
 * _islower - check for lower case character
 * @c: integer input
 *
 * Return: 0 (Lowercase) 1 (Otherwise)
 */

int _islower(int c);

/**
 * _isalpha - check for aphabetic character
 *@c: input character
 *
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isalpha(int c);

/**
 * _abs - Compute absolute value of a number
 *@int: integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int);

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str);

/**
 * _num_id - find index where a digit is first found in string
 * @s: string to search
 * Return: integer index where digit is first found
 */

int _num_id(char *s);

/**
 * find_sign - determine if integer is negative
 * @s: integer
 * Return: integer 1 or -1
 */
int find_sign(char *s);

#endif
