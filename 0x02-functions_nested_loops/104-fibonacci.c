#include <stdio.h>
/*
 * main - Fibonacci Sequence.
 * Description - A program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long term1 = 0, term2 = 1, sum;
	unsigned long term1_half1, term1_half2, term2_half1, term2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = term1 + term2;
		printf("%lu, ", sum);

		term1 = term2;
		term2 = sum;
	}

	term1_half1 = term1 / 10000000000;
	term2_half1 = term2 / 10000000000;
	term1_half2 = term1 % 10000000000;
	term2_half2 = term2 % 10000000000;

	for (count = 93; count < 99 ; count++)
	{
		half1 = term1_half1 + term2_half1;
		half2 = term1_half2 + term2_half2;
		if (term1_half2 + term2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		term1_half1 = term2_half1;
		term1_half2 = term2_half2;
		term2_half1 = half1;
		term2_half2 = half2;
	}
	printf("\n");
	return (0);
}
