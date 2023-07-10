#include "main.h"

#define FILE_PERMISSIONS (S_IRUSR | S_IWUSR)

/**
 * create_file - Create a file and write text content to it
 * @filename: Name of the file to create
 * @text_content: Null-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, FILE_PERMISSIONS);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		if (write(fd, text_content, count) != count)
			return (-1);
	}

	close(fd);
	return (1);
}
