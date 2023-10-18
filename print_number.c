#include "main.h"

/**
 * print_number - Print an integer using _putchar
 * @n: The integer to print
 * @len: Pointer to the length counter
 */

void print_number(int n, int *len)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		*len += 1;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10, len);

	_putchar((num % 10) + '0');
	*len += 1;
}
