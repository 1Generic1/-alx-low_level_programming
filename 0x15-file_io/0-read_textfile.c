#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Name of the text file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters __attribute__((unused)))
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	
	if (filename == NULL)
	return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	bytes_written = write(fd, buffer, bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_written);
}
