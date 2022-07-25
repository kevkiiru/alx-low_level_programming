#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the standard output
 * @filename: the file to be read
 * @letters: the number of letters to be read and printed
 *
 * Return: the number of letters printed or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w);
}
