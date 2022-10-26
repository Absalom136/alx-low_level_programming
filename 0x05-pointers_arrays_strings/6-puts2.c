#include "holberton.h"

/**
* puts2 - function that prints every other character
* @str: pointer to char
*/

void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{

		if (j % 2 == 0)

		{

			_putchar(*(str + j));

		}

		j += 1;
	}

	_putchar('\n');
}
