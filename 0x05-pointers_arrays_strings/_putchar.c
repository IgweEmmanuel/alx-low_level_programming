#include "main.h"
/**
 * _putchar - This is the function that outputs result
 * @ch: The input parameter
 *
 * Return: It returns 1
 */
int _putchar(int ch)
{
	if ((ch >= 'a' || ch <= 'z') || (ch >= 'A' || ch <= 'Z'))
		return (ch);
	else
		return (0);
}
