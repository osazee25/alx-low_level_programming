#include "main.h"
/**
 * _strspn - function that gets the length of a prefix string
 * @s: segment
 * @accept: source
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
	for (a = 0; accept[a]; a++)
	{
		if (*s == accept[a])
		{
			n++;
			break;
		}
		else if (accept[a + 1] == '\0')
			return (n);
	}
	s++;
	}
	return (n);
}
