#include "main.h"

/**
 * read_textfile - reads atext file and prints it to the POSIX standard output
 *
 * @filename: name
 * @letters: size
 *
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char ch[READ_BUF_SIZE];
	ssize_t ret;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, &ch[0], letters);
	ret = write(STDOUT_FILENO, &ch[0], ret);
	close(fd);
	return (ret);
}


