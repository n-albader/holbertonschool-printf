#include "main.h"

/**
 * print_binary_recursive - prints an unsigned integer in binary
 * @n: unsigned integer to print
 *
 * Return: number of characters printed
 */
static int print_binary_recursive(unsigned int n)
{
	int count;

	count = 0;

	if (n / 2)
		count += print_binary_recursive(n / 2);

	count += _putchar((n % 2) + '0');

	return (count);
}

/**
 * print_binary - prints an unsigned integer in binary
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n;

	n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));

	return (print_binary_recursive(n));
}
