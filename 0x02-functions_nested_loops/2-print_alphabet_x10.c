#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *Return: nothing
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpabet;

	while (count++ <= 9)
	{
		for (alpabet = 'a'; alpabet <= 'z'; alpabet++)
			_putchar(alpabet);
		_putchar('\n');
	}
}
