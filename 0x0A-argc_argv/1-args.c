#include "main.h"
#include <stdio.h>

/**
*main - print the name of the program
*@argc: count arguments
*@argv: arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv; /*in=gnore arvg*/
	printf("%i\n", argc - 1);

	return (0);
}
