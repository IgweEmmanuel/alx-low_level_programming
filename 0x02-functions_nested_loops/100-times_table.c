#include "main.h"
/**
 * 100-times_tea: Designs the multiplication table.
 *
 */
void print_times_table(int n)
{
	int i, b, c;

	for (i = 0; i <= 15; i++)
	{
		for (b = n; b <= 15; b++)
		{
			c = b * i;
			if (b < 10 && b != 10)
			{
				_putchar(c);
				_putchar(',');
				_putchar('.');
				_putchar('.');
				_putchar('.');
			}
			if (b < 100 && b != 100)
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
