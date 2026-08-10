#include "main.h"

/**
 * print_digits - prints an unsigned integer
 * @n: number to print
 * Return: number of characters printed
 */
static int print_digits(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_digits(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_number - prints an integer
 * @args: argument list
 * Return: number of characters printed
 */
int print_number(va_list args)
{
	int n;
	unsigned int num;
	int count = 0;

	n = va_arg(args, int);

	if (n < 0)
	{
		count += _putchar('-');
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}

	count += print_digits(num);

	return (count);
}
