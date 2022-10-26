#include "main.h"

/**
 * _puts- function that prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j += 1
	}
	_putchar('\n');
}
