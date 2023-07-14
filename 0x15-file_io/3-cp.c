#include "main.h"

#define BUFFER_SIZE 1024
#define PERMISSION  (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)


/**
 * error_exit - Print error message and exit with specified code
 * @code: The exit code
 * @msg: The error message to display
 * @tgt: The failed target
 */

void error_exit(int code, char *msg, char *tgt)
{
	int i;

	for (i = 0; msg[i] != '\0'; i++)
		_putchar(msg[i]);
	for (i = 0; tgt[i] != '\0'; i++)
		_putchar(tgt[i]);

	exit(code);
}

/**
 * cp_file - Copy the content of a file to another file
 * @file_from: The source file path
 * @file_to: The destination file path
 */

void cp_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "error: can't read from file ", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMISSION);
	if (fd_to == -1)
		error_exit(99, "error: can't write to ", file_to);

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1)
			error_exit(99, "error: can't write to ", file_to);

		if (w != r)
			error_exit(99, "error: write incomplete", file_to);
	}

	if (r == -1)
		error_exit(98, "error: can't read from file ", file_from);

	if (close(fd_from) == -1)
		error_exit(100, "error: can't close fd ", file_from);

	if (close(fd_to) == -1)
		error_exit(100, "error: can't close fd ", file_to);
}
