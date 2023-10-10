/*
 * File: 2-print_alphabet_x10.c
 * Auth: Emmanuel Igwe
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	char i;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
