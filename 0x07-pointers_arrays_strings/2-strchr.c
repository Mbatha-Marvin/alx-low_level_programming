#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be evaluated
 * @c: character being sort
 *
 * Return:  pointer to the first occurrence of the character c in the string
 *          or NULL if the character is not found
 */

char *_strchr (char *s, char c)
{
  do {
	if (*s == c)
	  {
	return (char*)s;
	  }
  } while (*s++);
  return (0);
}