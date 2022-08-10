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
	int i = 0;
	int char_sum = 0;

	/*va_start(va, format);*/
	switch (c)
	{
		case 'c':
			char_sum += print_char(va_arg(va, char));
			break;
	}
	return (char_sum);
}
