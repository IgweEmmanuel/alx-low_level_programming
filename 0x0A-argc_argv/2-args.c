#include <stdio.h>

/**
 * main - This prints the argument names in the compiler
 * @argc: argument 1
 * @argv: argument 2
 *
 * Return: outputs ints
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
