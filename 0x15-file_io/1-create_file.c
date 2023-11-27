#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name
 * @text_content: cont
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ret;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY, O_CREAT, O_TRUNC, O600);
	if (fd == -1)
		return (-1);
	if (strlen(text_content))
		ret = write(fd, text_content, strlen(text_content));
	close(fd);
	return (ret == strlen(text_content) ? 1 : -1);
}

