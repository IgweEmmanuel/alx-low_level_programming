#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, b, c;

	for (i = 0; i <= 7; i++)
	{
		for (b = i + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar((i % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if (i == 7 && b == 8 && c ==9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
