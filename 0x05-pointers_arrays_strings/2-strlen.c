#include "main.h"
/**
 * _strlen - function name
 * @s: function string parameter
 *
 * Return: 1
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
