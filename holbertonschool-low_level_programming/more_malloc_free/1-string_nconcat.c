#include "main.h"
/**
* *string_nconcat - concatenates two strings
*
* @s1: input string 1
* @s2: input string 2
* @n: use n bytes from string 2, ignoring the rest
*
* Return: returns pointer to a newly allocated space in memory
* containing both input strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	size_t len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}
