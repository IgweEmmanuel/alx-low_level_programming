#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans;
	int i;

	ans = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			ans = (ans << 1) | 1;
		else if (b[i] == '0')
			ans <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (ans);
}
