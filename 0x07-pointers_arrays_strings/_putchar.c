#include <unistd.h>
#include "main.h"

/**
*_putchar.c - writes the charater c to stdout
*@c: char to be printed
*Return: 1 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
