#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - func
 * @s: s
 * @accept: str
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
