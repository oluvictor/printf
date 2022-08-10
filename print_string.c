#include <stdlib.h>
#include "main.h"

/**
 * print_string - sum of all its parameters
 * @s: string to print
 *
 * Return: number of chracters printed
 */
int print_string(char *s)
{
	int i = 0;
	int sum_char = 0;

	if (s != NULL)
	{
		while (s[i])
		{
			_putchar(s[i]);
			sum_char++;
			i++;
		}
	}
	return (sum_char);
}
