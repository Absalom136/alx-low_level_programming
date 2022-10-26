#include "main.h"

/**
 * _puts- function that prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
