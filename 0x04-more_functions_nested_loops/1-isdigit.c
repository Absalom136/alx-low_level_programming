#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int x = 0;

	if (x >= '0' && x <= '9')
		x = 1;

	return (x);
}
