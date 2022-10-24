#include "main.h"

/**
 * print_triangle -prints a triangle
 * @size:triangle size
 */

void print_triangle(int size)
{
	int h, tri;

	if (size > 0)
		for (h = size; h > 0; h--)
		{
			for (tri = 1; tri <= size; tri++)
				if (tri >= h)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
