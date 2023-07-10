#include "main.h"

/**
 * read_textfile - a function that reads some text from a file
 * @filename: the name of the file to be opened
 * @letters: the amount to read from file
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_read, file, file_write;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	file_read = read(file, buffer, letters);
	if (file_read < 0)
		return (0);

	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_write < 0)
		return (0);

	close(file);
	free(buffer);
	return (file_write);
}
