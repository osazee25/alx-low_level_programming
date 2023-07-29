#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of th file we are creating
 * @text_content: the text we are writing
 * Return: 1 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, f_write, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		f_write = write(file, text_content, i);

		if (f_write < 0)
			return (0);
	}
	close(file);

	return (1);

}
