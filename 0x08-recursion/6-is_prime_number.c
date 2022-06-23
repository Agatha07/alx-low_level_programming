#include "main.h"
/**
 * isprime - Check if the number is prime
 * @num: Number to check if prime
 * @i: prime
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */

int isprime(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (isprime(num, i - 1));
}

/**
 * is_prime_number - recursive function
 * @n: Input integer
 * Return: terminates the recursive function
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (isprime(n, n - 1));
}
