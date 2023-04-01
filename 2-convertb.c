#include "main.h"

/**
 * convertb - converts a number from decimal to binary.
 * @num: then number to be converted.
 * @binary: a pointer to the array that will store the binary digits.
 *
 * Return: void.
 */
void convertb(unsigned int num, char *binary)
{
	int i = 0;

	while (num != 0)
	{
		binary[i] = (num % 2) + '0';
		num = num / 2;
		i++;
	}
	rev_string(binary);
}

/**
 * _strlen - Counts length of a string.
 * @s: The string.
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}


/**
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int len, i, mid;
	char tmp;

	if (s == 0)
		return;

	len = _strlen(s);
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
