#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string. The format string is composed of zero or more
 * directives.
 *
 * Return: number of characters printed (excluding the null byte used to end
 *  output to strings).
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	for (; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				count += print_c(args);
			else if (format[i] == 's')
				count += print_s(args);
			else if (format[i] == '%')
				count += print_p();
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_i_d(args);
			else
			{
				count += print_p();
				count += write(1, &format[i], 1);
			}
		}
		else
		{
			if (format[i] == '%' && !format[i + 1])
				return (-1);
			count += write(1, &format[i], 1);
		}
	}
	va_end(args);
	return (count);
}
