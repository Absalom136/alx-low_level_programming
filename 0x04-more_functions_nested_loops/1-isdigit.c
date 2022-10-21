#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int y = 0;

	if (y >= '0' && y <= '9')
		y = 1;

	return (y);
}
