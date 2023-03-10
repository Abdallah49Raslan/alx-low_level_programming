#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receirves
 * @argc: number of arguments
 * @argv: array of argutments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
