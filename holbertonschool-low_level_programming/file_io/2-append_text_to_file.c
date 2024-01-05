#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @file_name: name of the file
 * @content: text content to be added
 * Return: 1 if file exists, -1 if failure or does not exist
 */
int append_text_to_file(const char *file_name, char *content)
{
	int file_descriptor;
	int num_letters;
	int write_result;

	if (!file_name)
		return (-1);

	file_descriptor = open(file_name, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);
	if (content)
	{
		for (num_letters = 0; content[num_letters]; num_letters++)

		write_result = write(file_descriptor, content, num_letters);

		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
