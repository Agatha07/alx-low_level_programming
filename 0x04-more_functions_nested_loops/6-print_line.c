#include "main.h"
/**
 *print_line - Print a straight line on the command
 *@n: number of times to print
 */
void print_line(int n)
{
	char c;
	
	if (n > 0)
	{
		_putchar('\n');
	}
		for (c = 0; c < n; c++)
		{
			_putchar ('_');
		}
	_putchar ('\n');

}
