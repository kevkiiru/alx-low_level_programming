#include <stdio.h>
#include "main.h"

/**
 * create_filename - function that creates a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, leng);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
