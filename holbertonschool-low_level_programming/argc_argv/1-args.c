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
	(void)argv;
	if (argc > 1)
	{
	printf("%d\n", argc - 1);
	}
	else
	{
	printf("%d\n", 0);
	}
	return (0);
}
