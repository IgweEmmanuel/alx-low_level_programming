#include "main.h"
/**
 * *_strcat - This concatenates the strings
 * @dest: This is the first string
 * @src: This is the second string
 *
 * Return: Always returns value char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
