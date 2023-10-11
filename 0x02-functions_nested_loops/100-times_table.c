#include "main.h"
/**
 * print_times_table - Designs the multiplication table.
 * @n: This is the input value with int datatype
 *
 (* Return: This returns void)?
 */
void print_times_table(int n)
{
	int i, b, c;

	for (i = 0; i <= 15; i++)
	{
		for (b = n; b <= 15; b++)
		{
			c = b * i;
			if (b <= 9)
			{
				_putchar(c);
				_putchar(',');
				_putchar('.');
				_putchar('.');
				_putchar('.');
			}
			if (b <= 99)
			{
				_putchar(c);
				_putchar(',');
				_putchar('.');
				_putchar('.');
			}
			if (b >= 100)
			{
				_putchar(c);
				_putchar(',');
				_putchar('.');
			}
		}
	}
}
