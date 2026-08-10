#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: number of characters printed
 */

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);
int process_format(char specifier, va_list args);

int _putchar(char c);

#endif
