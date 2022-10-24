#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the no of diagonal lines to be printed
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
