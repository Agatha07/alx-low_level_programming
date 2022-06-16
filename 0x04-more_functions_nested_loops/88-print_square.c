#include "main.h"
/**
 *print_square - print square followed by a new line
 *
 *@size: the size of the square
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j == i)
				{
					_putchar('#');
				}
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
