#include "main.h"

/**
 * binary_to_uint - This function prints only binary numbers
 * @b: This is the parameter for the binary values
 *
 * Return: This returns unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	unsigned int i;

	dec = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (dec);
}
