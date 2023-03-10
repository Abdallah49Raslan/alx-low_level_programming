#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - writes the charcters to sdout
 * @s: the charcter to print
 * @b: the charcter to print
 * @n: the unsigned integer to print
 * Return: values
 */

char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}
