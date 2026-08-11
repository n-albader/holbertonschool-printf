#include "main.h"

/**
 * print_hex_recursive - prints an unsigned integer in hexadecimal
 * @n: unsigned integer
 * @uppercase: whether to use uppercase letters
 *
 * Return: number of characters printed
 */
static int print_hex_recursive(unsigned int n, int uppercase)
{
	int count;
	char *digits;

	count = 0;

	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";

	if (n / 16)
		count += print_hex_recursive(n / 16, uppercase);

	count += _putchar(digits[n % 16]);

	return (count);
}

/**
 * print_hex - prints an unsigned integer in hexadecimal
 * @args: argument list
 * @uppercase: uppercase or lowercase
 *
 * Return: number of characters printed
 */
int print_hex(va_list args, int uppercase)
{
	unsigned int n;

	n = va_arg(args, unsigned int);

	return (print_hex_recursive(n, uppercase));
}
