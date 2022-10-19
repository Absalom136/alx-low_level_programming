#include <stdio.h>

/**
 * main - computes and prints the sum of the multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int mult = 0;
	int prod = 0;

	while (mult < 1024)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
		{
			prod += mult;
		}
		mult += 1;
	}
	printf("%d\n", prod);
	return (0);
}
