#include "main.h"

/**
 * print_triangle -prints a triangle
 * @size:triangle size
 */

void print_triangle(int size)
{
	int i, tri;

	if (size > 0)
	{
		for (i = 1; j <= size; j++)
		{
			for (tri = size - j; tri > 0; tri--)

				_putchar(' ');

			for (tri = 0; tri < j; tri++)
				_putchar('#');

			if (j == size)
				continue;

			_putchar('\n');
		}
	}
	_purtchar('\n');
}
