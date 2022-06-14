#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: String to find the characters
 */

void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i++]')
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
