#include "main.h"

/**
 * main -print all alphats in lower case
 * Return: o
 */

void print_alphabet(void);
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
