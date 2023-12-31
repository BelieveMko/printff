#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int my_puts(char *c);
int print_int(va_list args);
int print_number(va_list args);
int print_decimal(va_list args);
int print_binary(va_list val);

#endif
