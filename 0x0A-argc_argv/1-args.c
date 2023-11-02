#include <stdio.h>
#include "main.h"
/**
 * main - This prints the argument names in the compiler
 * @argc: argument 1
 * @argv: argument 2
 *
 * Return: outputs ints
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
