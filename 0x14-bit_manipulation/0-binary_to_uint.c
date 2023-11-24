#include "main.h"

/**
 * binary_to_uint - This function prints only binary numbers
 * @b: This is the parameter for the binary values
 *
 * Return: This returns unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bin = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}		
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			bin += 1;
		bin <<= 1;
	}
	return (bin);
}
