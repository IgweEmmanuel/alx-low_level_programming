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

	if (n > 15 || n < 0)
		return;

	else
	{
		for (i = 0; i <= n; i++)
		{
			for (b = 0; b <= n; b++)
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
}

