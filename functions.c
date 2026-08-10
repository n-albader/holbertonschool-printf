#include "main.h"

/**
 * process_format - handles format specifiers
 * @specifier: character after %
 * @args: argument list
 * Return: number of characters printed
 */
int process_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char(args));
	else if (specifier == 's')
		return (print_string(args));
	else if (specifier == '%')
		return (print_percent(args));

	_putchar('%');
	return (1 + _putchar(specifier));
}

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @args: argument list
 * Return: number of chars printed
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @args: argument list
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int count;

	str = va_arg(args, char *);
	count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}

/**
 * print_percent - prints a literal percent sign
 * @args: argument list
 * Return: number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
