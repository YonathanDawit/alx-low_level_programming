#include "main.h"

/**
 * _strchr: a function that locates a character in a string
 * @s:char array string
 * @c:char to look for
 * Return:NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
