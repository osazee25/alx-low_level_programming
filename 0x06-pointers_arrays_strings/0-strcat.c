#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: concatenated result
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
	dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
	dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
