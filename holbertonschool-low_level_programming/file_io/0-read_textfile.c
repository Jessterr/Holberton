#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @num_letters: numbers of letters to print.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * num_letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}	bytes_read = read(file_descriptor, buffer, num_letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
