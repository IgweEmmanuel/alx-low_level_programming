#include "main.h"
/**
 * _islower - Chechs if a character is in lower case
 * @c: This is the character
 * Return: Returns 0 or 1
 */
int _islower(int i)
{
	if ( i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
