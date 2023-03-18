#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - func
 * @haystack: s
 * @needle: s
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
