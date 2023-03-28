#include "main.h"

/**
 * print_c - prints a character from a variable list of arguments.
 * @l: the variable list.
 *
 * Return: the number of characters printed.
 */
int print_i_d(va_list y)
{
        int ret;
	char buff[12];

	ret = sprintf(buff, "%d", va_arg(y, int));

	if (ret < 0)
		return (-1);
	write(1, buff, strlen(buff));	

	return (ret);
}
