#include "main.h"

/**
*_memset - function that fills memory with a constant byte
*@s: mamory area to return
*@b: constant byte
*@n: size of bytes
*Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
