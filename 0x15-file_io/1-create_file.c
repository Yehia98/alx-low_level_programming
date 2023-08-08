#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: a pointer to the file to be created.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 for success or -1 for failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	/**
	* if (text_context == NULL)
	*	{
	*		for (;text_content[len]; len++)
	*	}
	*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
