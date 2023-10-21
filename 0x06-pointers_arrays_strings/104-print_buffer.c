#include "main.h"
#include <stdio.h>

/**
 * main - the main functon that prints buffer
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[] = "#buffer\1\2\3\4\5\6\7#cisfun\n\0\0\00\x20\x21\x34\x56\n";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
