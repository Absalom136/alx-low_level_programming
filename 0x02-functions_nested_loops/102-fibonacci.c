#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: 0
 */

int main(void)
{
	long a = 0;
	long b = 1;
	int y = 0;
	long fibo;

	while (y < 50)
	{
		fibo = a + b;
		if (y != 49)
			printf("%ld, ", fibo);
		else
			printf("%ld\n", fibo);
		a = b;
		b = fibo;
		y = += 1;
	}
	return (0);
}
