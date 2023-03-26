#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
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
	char *str, chr;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == 'c' && format[i - 1] == '%')
		{
			chr = va_arg(args, int);
			write(1, &chr, 1);
			count++;
		}
		else if (format[i] == 's' && format[i - 1] == '%')
		{
			str = va_arg(args, char *);
			if (str != NULL)
			{
				write(1, str, strlen(str));
				count++;
			}
			else
				write(1, "(null)", 6);
		}
		else if (format[i] == '%' && format[i - 1] == '%')
		{
			write(1, "%", 1);
			count++;
		}
		else if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
