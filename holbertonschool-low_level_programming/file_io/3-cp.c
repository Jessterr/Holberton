#include "main.h"
#include <stdio.h>

/**
 * handle_file_errors - checks if file can be opened
 * @source: source
 * @destination: destination
 * @argv: argument data
 * Return: no return
 */
void handle_file_errors(int source, int destination, char *argv[])
{
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program entry point
 * @argc: number of arguments
 * @argv: argument data
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int source, destination, close_result;
	ssize_t n_chars, n_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_file_errors(source, destination, argv);
	n_chars = 1024;

	while (n_chars == 1024)
	{
		n_chars = read(source, buffer, 1024);
		if (n_chars == -1)
			handle_file_errors(-1, 0, argv);
		n_written = write(destination, buffer, n_chars);
		if (n_written == -1)
			handle_file_errors(0, -1, argv);
	}

	close_result = close(source);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}

	close_result = close(destination);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}
	return (0);
}
