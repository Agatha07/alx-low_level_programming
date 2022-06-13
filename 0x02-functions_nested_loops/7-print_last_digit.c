#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @i: Returns the value of the last digit
* Return: value of the last digit
*/
int print_last_digit(int i)
{
	_putchar(i % 10 + '0');
	return (i % 10);
}
