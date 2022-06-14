#include "main.h"

/**
* print_times_table - prints n times table starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < num + 1; i++)
	{
	for (j = 0; j < num + 1; j++)
	{
		_putchar("%d", i * j);
		if (j < num)
		{
			_putchar(", ");
		}
	}
	_putchar("\n");
	}
	return (0);
}
