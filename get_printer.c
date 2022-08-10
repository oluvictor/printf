#include <stdlib.h>
#include "main.h"

/**
 * get_printer - selects the right function to print the argument
 * @va: va_list of arguments
 * @c: specifier
 *
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 */
int get_printer(va_list va, char c)
{
	int char_sum = 0;

	switch (c)
	{
		case 'c':
			char_sum += print_char(va_arg(va, int));
			break;
		case 's':
			char_sum += print_string(va_arg(va, char *));
			break;
		case '%':
			_putchar('%');
			char_sum++;
			break;
		default:
			_putchar('%');
			_putchar(c);
			char_sum++;
	}
	return (char_sum);
}
