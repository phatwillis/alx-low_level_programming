#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exit codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_result, write_result, close_result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open or create the destination file for writing, truncate if it exists */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	/* Read from the source and write to the destination */
	do {
		read_result = read(fd_from, buffer, BUFFER_SIZE);
		if (read_result == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	} while (read_result > 0);
	/* Close file descriptors */
	close_result = close(fd_from);
	if (close_result == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close_result = close(fd_to);
	if (close_result == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

