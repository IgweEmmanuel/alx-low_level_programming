/*
 * File: 103-fibonacci.c
 * Auth: Emmanuel
 */

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float sum2;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			sum2 += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", sum2);

	return (0);
}
