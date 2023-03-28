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
	return (write(1, &chr, 1));
}

/**
 * print_s - prints a string from a variable list of arguments.
 * @l: the variable list.
 *
 * Return: the number of characters printed.
 */
int print_s(va_list l)
{
	char *str;
	int count = 0;

	str = (char *)va_arg(l, char *);
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
	return (write(1, "%", strlen("%")));
}
