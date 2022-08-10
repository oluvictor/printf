#include <stdlib.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 * ...: variadic arguments
 *
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int char_sum = 0;

	if (format != NULL)
	{
		while (format[i])
		{
			_putchar(format[i]);
			char_sum++;
			i++;
		}
	}
	return (char_sum);
}
