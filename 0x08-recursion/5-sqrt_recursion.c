#include "main.h"
/**
 * findsqrt - Find the square root of number
 * @num: The number to find squareroot
 * @root: Root
 * Return: Root of num
 */

int findsqrt(int num, int root)
{
	if (root * root > num)
	{
		return (-1);
	}
	else if (root * root == num)
	{
		return (root);
	}
	else
		return (findsqrt(num, root + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: number
 * Return: Square root and if n does not have a natural square root,
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (findsqrt(n, 1));

}
