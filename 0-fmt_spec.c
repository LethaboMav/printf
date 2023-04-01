#include "main.h"

/**
 * print_c - prints a character from a variable list of arguments.
 * @l: the variable list.
 *
 * Return: the number of characters printed.
 */
int print_c(va_list l)
{
	unsigned char chr;

	chr = (unsigned char)va_arg(l, int);
	write(1, &chr, 1);
	return (1);
}

/**
 * print_s - prints a string from a variable list of arguments.
 * @l: the variable list.
 *
 * Return: the number of characters printed.
 */
int print_s(va_list l)
{
	const char *str;
	int count = 0;

	str = (const char *)va_arg(l, const char *);
	if (str == NULL)
	{
		write(1, "(null)", strlen("(null)"));
		count += strlen("(null)");
	}
	else
	{
		write(1, str, strlen(str));
		count += strlen(str);
	}
	return (count);
}

/**
 * print_p - prints a percent sign.
 *
 * Return: the number of characters printed.
 */
int print_p(void)
{
	write(1, "%", strlen("%"));
	return (1);
}

/**
 * print_b - prints binary numbers
 * @l: the number to print.
 *
 * Return: the number of binary digits printed.
 */
int print_b(va_list l)
{
	char binary[65];

	convertb(va_arg(l, unsigned int), binary);
	return (write(1, binary, strlen(binary)));
}
