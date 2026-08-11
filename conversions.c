#include "main.h"

/**
 * print_unsigned_recursive - prints an unsigned integer
 * @n: unsigned integer
 *
 * Return: number of characters printed
 */
static int print_unsigned_recursive(unsigned int n)
{
	int count;

	count = 0;

	if (n / 10)
		count += print_unsigned_recursive(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_unsigned - prints an unsigned integer
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n;

	n = va_arg(args, unsigned int);

	return (print_unsigned_recursive(n));
}
/**
 * print_octal_recursive - prints an unsigned integer in octal
 * @n: unsigned integer
 *
 * Return: number of characters printed
 */
static int print_octal_recursive(unsigned int n)
{
	int count;

	count = 0;

	if (n / 8)
		count += print_octal_recursive(n / 8);

	count += _putchar((n % 8) + '0');

	return (count);
}

/**
 * print_octal - prints an unsigned integer in octal
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n;

	n = va_arg(args, unsigned int);

	return (print_octal_recursive(n));
}
