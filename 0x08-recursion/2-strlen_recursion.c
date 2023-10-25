#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string being passed
 * Return: 0 for null else return function
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
