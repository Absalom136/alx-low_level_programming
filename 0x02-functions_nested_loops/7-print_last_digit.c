#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number in question
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int pl = n % 10;

	if (pl < 0)
		pl *= -1;

	_putchar(pl + '0');

	return (pl);
}
