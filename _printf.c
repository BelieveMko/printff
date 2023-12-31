#include "main.h"

/**
 * _printf - print stout formart text
 *
 * @format: input specifier
 * Return: num of bytes
 */

int _printf(const char *format, ...)
{
	unsigned int i, s_count, count = 0;

	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s_count = my_puts(va_arg(args, char *));
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count += 1;
	}

	va_end(args);
	return (count);
}
