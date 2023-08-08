#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: a pointer the file that will be appended.
 * @text_content: a string to be added to the file.
 * Return: 1 for success and -1 for failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
