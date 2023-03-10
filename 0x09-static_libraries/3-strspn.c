#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - writes the charcters to sdout
 * @s: the charcter to print
 * @accept: the charcter to print
 * Return: values
 */

unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
