#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - writes the charcters to sdout
 * @src: the charcter to print
 * @dest: the charcter to print
 * @n: the integer to print
 * Return: vlaus
 */

char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}
