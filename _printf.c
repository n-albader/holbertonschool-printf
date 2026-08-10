#include "main.h"

/**
 * _printf - simplified printf
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			count += process_format(format[i], args);

		}

		i++;
	}
	va_end(args);
	return (count);
}
