#include "main.h"

/**
 * print_number - Print an integer using _putchar
 * @args: input character
 * Return: number of characters printed
 */

int print_number(va_list args)
{
	int n = va_arg(args, int);
	int num, a = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (a < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		a = -a;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}

	_putchar(a + '0');
	return (i);
}

#include "main.h"

/**
 * print_decimal - prints decimal
 * @args: argument to print
 * Return: num of characters printed
 */

int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int num, a = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (a < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		a = -a;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}

	_putchar(a + '0');
	return (i);
}
