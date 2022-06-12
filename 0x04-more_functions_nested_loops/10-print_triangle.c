#include "main.h"
/**
*print_triangle - Print a triangle
*@size: the number of rows
*/
void print_triangle(int size);
{
	int i, j, size;
	
	size = 10;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size -i -1);
			{
				_putchar(" ");
			} else
			{
				_putchar("*");
			}
		}
		_putchar("\n");
	}
	return 0;
}
