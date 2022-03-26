#include "main.h"

/**
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
