#include "main.h"
/**
 * _isalpha - checks for alphanumeric characters
 * Return: 0 if c is a letter or 1 if otherwise
 * @c: the character to be used
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
