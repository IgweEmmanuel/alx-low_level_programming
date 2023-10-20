#include "main.h"
/**
 * _strncpy - This concatenates the strings
 * @dest: This is the first string
 * @src: This is the second string
 * @n: variable integer
 * Return: Always returns value char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < n && dest[i] != '\0')
		i++;

	while (j < i && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
