#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix standard output
 * @filename: The path to the file
 * @letters: The number of letters to be read and printed
 *
 * Return: The actual number of letters read and printed
 * 0 if the file can not be opened or read
 * 0 if filename is null
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_bytes_read, num_bytes_written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	num_bytes_read = read(fd, buf, letters);
	if (num_bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[num_bytes_read] = '\0';

	num_bytes_written = write(STDOUT_FILENO, buf, num_bytes_read);
	if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (num_bytes_written);
}
