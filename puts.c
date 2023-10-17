#include "main.h"

/**
 * my_puts - print string
 * @c: input string
 * Return: num of characters written, otherwise, -1.
 */

int  my_puts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			_putchar(c[count]);
		}
	}
	return (count);
}
