#include "main.h"
/**
 * _strncat - This concatenates the strings
 * @dest: This is the first string
 * @src: This is the second string
 * @n: variable integer
 * Return: Always returns value char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
