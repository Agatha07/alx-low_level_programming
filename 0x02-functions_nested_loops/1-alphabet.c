#include "main.h"
/**
 * main - Entry point
 * Description: prints the alphabet, in lowercase
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

		_putchar('\n');

	return (0);
}
