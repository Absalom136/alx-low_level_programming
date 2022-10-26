#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	_putchar(*(s + len));
_putchar(10);
}
