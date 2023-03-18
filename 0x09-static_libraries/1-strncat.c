#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - func
 * @dest: dest
 * @src: src
 * Return: char
 * @n: n
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
