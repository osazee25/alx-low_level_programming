#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_status(int status, int file, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_status(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_status(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buff, sizeof(buff));
		if (n_read == -1)
			check_status(-1, -1, argv[1], 'O');
		wrote = write(dest, buff, n_read);
		if (wrote == -1)
			check_status(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_status(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_status(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_status - checks if a file can be opened or closed
 * @status: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @file: file descriptor
 *
 * Return: void
 */
void check_status(int status, int file, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
	else if (mode == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
