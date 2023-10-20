#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "how are you doing. Ijeoma hope you are good. Since I met you I have been smiling.\nthe sky is green or blue!\tlet us smile together\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
