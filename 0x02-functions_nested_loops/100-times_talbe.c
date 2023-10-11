#include "main.h"
/**
 * 100-times_tea: Desings the multiplication table.
 *
 */
void print_times_table(int n)
{
	for (i = 0; i <= 15; i++)
	{
		n = b * i;

		for (b = 0; b <= 15; b++)
		{
			if (b < 10 && b != 10)
			{
				putchar(n);
				putchar(',');
				putchar('.');
				putchar('.');
				putchar('.');
			}
			if (b < 100 && b != 100)
			{
				putchar(n);
				putchar(',');
				putchar('.');
				putchar('.');
			}
			if (b >= 100)
			{
				putchar(n);
				putchar(',');
				putchar('.');
			}
		}
		putchr('\n');
	}
}
