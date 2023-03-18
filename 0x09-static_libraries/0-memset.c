#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - func
 * @s: s
 * @b: b
 * @n: n
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
