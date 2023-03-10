#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - writes the charcters to sdout
 * @src: the charcter to print
 * @dest: the charcter to print
 * @n: the integer to print
 * Return: valus
 */

char *_strncpy(char *dest, char *src, int n)
{
	return strncpy(dest, src, n);
}
