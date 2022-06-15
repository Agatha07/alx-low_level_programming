#include <stdio.h>
/**
* main - Fibonacci sequence
* description: A program that finds and prints the sum of the even-valued terms
*
* Return: 0
*/

int main(void)
{
	unsigned long term1 = 0, term2 = 1, nextterm;
	float sum;

	while (1)
	{
		nextterm = term1 + term2;
		if (nextterm > 4000000)
			break;

		if ((nextterm % 2) == 0)
			sum += nextterm;

		term1 = term2;
		term2 = nextterm;
	}
	printf("%.0f\n", sum);

	return (0);
}
