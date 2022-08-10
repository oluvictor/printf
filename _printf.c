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
	va_list va;

	va_start(va, format);
	if (format != NULL)
	{
		while (format[i])
		{
			while (format[i] == '%')
			{
				/*arg = va_arg(va);*/
				/*print_t.c = format[i];*/
				char_sum = get_printer(va, format[i + 1]);
				/*char_sum += print_t();*/
				i += 2;
			}
			_putchar(format[i]);
			char_sum++;
			i++;
		}
	}
	va_end(va);
	return (char_sum);
}
