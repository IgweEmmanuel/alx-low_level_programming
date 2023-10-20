#include "main.h"
#include <stdio.h>

/**
 * main - checks code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Make your life worth living bro.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
