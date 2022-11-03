#include "main.h"

/**
*is_prime_number - input integer is a prime number, otherwise return
* @n: the int
* Return: 1
*/

int is_prime_number(int n)
{
	if (n <= 1)

		return (0);

	return (getNumPrim(n, 2));
}

/**
*getNumPrim - checks if a number is prime
*@num: Number Integer
* @i: Counter variable
*Return: 1
*/

int getNumPrim(int num, int i)
{
	if (num == i)

		return (1);

	if (num % i == 0)

		return (0);

	return (getNumPrim(num, i + 1));
}
