#include "main.h"

/**
 * print_i_d - prints an integer from a variable list of arguments.
 * @y: the variable list.
 *
 * Return: the length of the integer printed.
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
