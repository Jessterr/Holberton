#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string contains only digits
 * @str: the input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - Prints the sum of valid integer arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if successful, 1 if there are non-integer arguments
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			int str_to_int = atoi(argv[i]);

			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
