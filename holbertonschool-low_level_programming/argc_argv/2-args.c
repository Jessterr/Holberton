#include "main.h"
#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: Number of arguments, unused
 * @argv: Array of argument strings
 * Return: Always 0
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
