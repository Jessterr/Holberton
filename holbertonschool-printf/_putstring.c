#include "main.h"
/**
 * _putstring - prints a string
 * @args: va_list containing the variable arguments to be formatted & printed
 * Return: Number of characters printed
 */
int _putstring(va_list args)
{
	const char *null_string, *string;

	int count

	count = 0;
	null_string = "NULL";
	string = va_arg(args, const char *);
	if (str)
	{
		while (*str)
		{
			if (_putchar(*str) == -1)
				return (-1);
			count++;
			str++;
		}
	}	else
	{
		while (*null_string)
		{
			if (_putchar(*null_string) == -1)
				return (-1);
			count++;
			null_string++;
		}
	} return (count);
}