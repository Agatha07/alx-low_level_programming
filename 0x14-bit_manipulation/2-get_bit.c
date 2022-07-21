#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bit to search.
 * @index: Index of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n != 0)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
