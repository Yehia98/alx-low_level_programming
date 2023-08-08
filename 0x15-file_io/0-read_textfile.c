#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file being read.
 * @letters: is the number of letters it should read and print.
 * Return: the number of bytes actually read and printed, 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, txt, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	txt = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, txt);
	free(buffer);
	close(fd);
	return (w);
}
