#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: String to convert.
 *
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	if (!b)
		return (0);
	num = 0;
	for (i = 0; *(b + i); i++)
	{
		num = num << 1;
		if (*(b + i) == '1')
			num = num | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (num);
}
