#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, b;

	for (i = 0; i <= 8; i++)
	{
		for (b = i + 1; b <= 9; b++)
		{
			putchar((i % 10) + '0');
			putchar((b % 10) + '0');
			putchar(' ');
			b++;
			putchar((i % 10) + '0');
			putchar((b % 10) + '0');
			if (i == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
