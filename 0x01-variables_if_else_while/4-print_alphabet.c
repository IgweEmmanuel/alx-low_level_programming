#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		c += '\n';
		if (c != 'q' || c != 'e')
			putchar(c);
		else
			putchar('\n');
	}
	return (0);
}
