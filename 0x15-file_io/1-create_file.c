#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - Create a file with the specified name 
 * and write the text content to it.
 * @filename: Name of the file to create
 * @text_content: Text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content) 
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	}
	else
	{
		if (close(fd) == -1)
			return (-1);
		return (1);
	}
	close(fd);
	return (1);
}
