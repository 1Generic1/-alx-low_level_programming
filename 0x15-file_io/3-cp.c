#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - entry point of the program that cpoies a file to another file
 * @argc - number of command argument in the program that is argument count
 * @argv - actual command argument values in the program
 *
 * Return - 0 on success
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	ssize_t bytes_written;
	int fd_to;
	int fd_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT |O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		{
			bytes_written = write(fd_to, buffer, bytes_read);
			if(bytes_written == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
				exit(99);
			}
		}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
