#include "main.h"

/**
 * _strchr: a function that locates a character in a string
 * @s:char array string
 * @c:char to look for
 * Return:NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
