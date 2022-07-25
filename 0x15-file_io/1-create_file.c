#include <stdio.h>
#include <stdlib.h>
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
	int a = 0, leng;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[a] != '\0')
	{
		a++;
	}

	leng = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (leng == -1)
		return (-1);

	write(leng, text_content, a);

	return (1);
}
