#include <unistd.h>

/**
*_putchar - writes the charater c to stdout
*@c: the charater to print
*Return: 1 on sucess, -1 on error
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
