#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - writes a function that reads and prints to stdo
 * @letters: the letters to read
 * @filename: text to be read
 *
 * Return: the actual number that was printed and read or return 0 if Null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t c;
	ssize_t f;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	f = read(fd, buf, letters);
	c = write(STDOUT_FILENO, buf, f);

	free(buf);
	close(fd);
	return (c);
}
