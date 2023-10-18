#include "main.h"
#include <stdio.h>

/**
 * print_binary - unsigned int argument is converted to binary
 * @val: input
 * Return: 0
 */

int print_binary(va_list val)
{
	int i, a = 1, b;
	int cont = 0;
	int x = o;
	unsigned int n;
	unsigned int num = va_arg(val, unsigned int);

	for (i = 0; i < 32; i++)
	{
		n = ((a << (32 - i)) & num);
		if (n >> (31 - i))
			x = 1;
		if (x)
		{
			b = n >> (31 - i);
			_putchar(n + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);

}
