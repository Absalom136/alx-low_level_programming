#include "main.h"

/**
*_strlen_recursion - returns the length of a string
*@s: string
*Return: the length
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
