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

	b = _isalpha(98);
	_putchar(b + '0');
	b = _isalpha(0);
	_putchar(b + '0');
	b = _isalpha(0xff);
	_putchar(b + '0');
	b = _isalpha(-1);
	_putchar(b + '0');
	b = _isalpha(99);
	_putchar(b + '0');
	b = _isalpha('s');
	_putchar(b + '0');
	b = _isalpha('F');
	_putchar(b + '0');
	b = _isalpha('9');
	_putchar(b + '0');
	b = _isalpha('M');
	_putchar(b + '0');
	b = _isalpha('&');
	_putchar(b + '0');
	b = _isalpha('H');
	_putchar(b + '0');
	_putchar('\n');
	return (0);
}
