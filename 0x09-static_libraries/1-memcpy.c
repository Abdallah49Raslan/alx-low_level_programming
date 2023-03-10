#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - writes the charcters to sdout
 * @dest: the charcter to print
 * @src: the charcter to print
 * @n: the unsigned integeer to print
 * Return: values
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy(dest, src, n);
}
