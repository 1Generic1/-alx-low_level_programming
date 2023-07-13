#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(const char *error_message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error_message);
	exit(EXIT_FAILURE);
}

void copy_file(const char *file_from, const char *file_to)
{
	int fb_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and exit("can't read from file");
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
		print_error_and_exit("can't write to file");
}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
		print_error_and_exit("can't read from file");
}
	if (bytes_read == -1)
	print_error_and_exit("can't read file");
	if (close(fd_from) == -1)
	print_error_and_exit("can't close file descriptor");
	if (close(fd_to) == -1)
	print_error_and_exit("can't close file descriptor");
	}
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	copy_file(file_from, file_to);
	return (0);
}

