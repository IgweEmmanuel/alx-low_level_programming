#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char u;

	for (c = 'a'; c <= 'z'; c++)
	{
		u = toupper(c);
		putchar(c);
		putchar(u);
	}
	putchar('\n');
	return (0);
}
