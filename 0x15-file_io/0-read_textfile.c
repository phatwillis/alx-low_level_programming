#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened, read, or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_bytes, write_status;
	char *buf;

	if (filename == NULL)
		return (0);

	/* Open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for buffer */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read from file */
	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* Write to standard output */
	write_status = write(STDOUT_FILENO, buf, read_bytes);

	/* Cleanup and check for errors */
	free(buf);
	close(fd);

	if (write_status == -1 || (size_t)write_status != letters)
		return (0);

	return (read_bytes);
}

