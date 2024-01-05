#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char zyx;

	for (zyx = 'z'; zyx >= 'a'; zyx--)
	{
		putchar(zyx);
	}
	putchar('\n');
	return (0);
}
