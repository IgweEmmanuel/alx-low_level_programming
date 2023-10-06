#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c = tolower('A-Z');

	putchar(c);
	putchar('\n');
	return (0);
}
