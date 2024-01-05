#include "main.h"

/**
 * create_file - creates a file
 * @file_name: name of the file
 * @content: content to be written in the file
 * Return: 1 if successful, -1 if it fails
 */
int create_file(const char *file_name, char *content)
{
	int file_descriptor;
	int num_letters;
	int write_result;

	if (!file_name)
		return (-1);

	file_descriptor = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);
	if (!content)
		content = "";
	for (num_letters = 0; content[num_letters]; num_letters++)

	write_result = write(file_descriptor, content, num_letters);

	if (write_result == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}
