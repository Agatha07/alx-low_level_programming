#include "main.h"
/**
 * print_most_numbers - Print number 0 to 9 except 2 and 4
 *
 */
void print_most_numbers(void)
{
	char numbers;

	for (numbers = 0; numbers <= 10; numbers++)
	{
		if (numbers != 2 && numbers != 4)
			_putchar(numbers);
	}
	_putchar('\n');

}
