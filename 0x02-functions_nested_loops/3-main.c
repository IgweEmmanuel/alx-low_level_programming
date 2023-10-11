#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
	int b;

	b = _islower('o');
	_putchar(b + '0');
	b = _islower(108);
	_putchar(b + '0');
	b = _islower('c');
	_putchar(b + '0');
	b = _islower('I');
	_putchar(b + '0');
	b = _islower('s');
	_putchar(b + '0');
	b = _islower(70);
	_putchar(b + '0');
	b = _islower(20);
	_putchar(b + '0');
	b = _islower('U');
	_putchar(b + '0');
	b = _islower('n');
	_putchar(b + '0');
	b = _islower(0);
	_putchar(b + '0');
	b = _islower('H');
	_putchar(b + '0');
	_putchar('\n');
	return (0);
}
