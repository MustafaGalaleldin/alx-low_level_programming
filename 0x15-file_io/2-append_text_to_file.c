#include "main.h"

/**
 * _strlen - l
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name
 * @text_content: cont
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ret = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (_strlen(text_content))
		ret = write(fd, text_content, _strlen(text_content));
	close(fd);
	return (ret == _strlen(text_content) ? 1 : -1);
}

