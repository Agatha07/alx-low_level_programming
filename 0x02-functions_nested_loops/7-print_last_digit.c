#include <stdio.h>
/**
* print_last_digit - print the last digit of a number
* @num: any number
* @digit: the last digit of a number
* Return: 0
*/

int print_last_digit(int digit)
{
	_putchar((digit % 10) + '0');
	
	return (digit % 10);
}
