#include <stdio.h>
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
	int kk;
	int a, b;
	char *let;

	if (!filename)
		return (0);

	kk = open(filename, O_RDONLY);
	if (kk < 0)
		return (0);

	let = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	a = read(kk, let, letters);
	if (a < 0)
	{
		free(let);
		return (0);
	}
	let[a] = '\0';

	close(kk);

	b = write(STDOUT_FILENO, let, a);
	if (b < 0)
	{
		free(let);
		return (0);
	}

	free(let);
	return (b);
}
