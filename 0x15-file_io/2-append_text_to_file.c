#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result, close_result;

	if (filename == NULL)
		return (-1);

	/* Open the file with write-only access and append data at the end */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Write the text content to the file */
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close_result = close(fd);
	if (close_result == -1)
		return (-1);

	return (1);
}

