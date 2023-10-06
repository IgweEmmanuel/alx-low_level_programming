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
	char l;
	char u;

	c = 'M';
	l = tolower(c);
	u = toupper(c);
	putchar(l);
	putchar(u);
	putchar('\n');
	return (0);
}
