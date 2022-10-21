#include "main.h"

/**
 * print_numbers - a function that prints the numbers
 */

void print_numbers(void)
{
	int y = 0;

	while (y < 10)
	{
		_putchar(y + '0');
		y += 1;
	}
	_putchar('\n');
}
