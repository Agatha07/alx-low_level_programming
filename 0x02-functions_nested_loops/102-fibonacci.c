#include <stdio.h>
/**
* main - print prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/

int main(void)
{
	int count = 0;
	long int a = 0, b = 1, sum;

	while (count < 50)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%lu", sum);

		if (count < 49)
		{
			printf(", ");
		}
		count++;
	}
	putchar('\n');
	return (0);
}
