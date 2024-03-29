#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL, return -1.
 *         If the file does not exist or the user lacks write permissions, return -1.
 *         Otherwise, return 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	o_file = open(filename, O_WRONLY | O_APPEND);
	if (o_file == -1)
		return (-1);

	w_file = write(o_file, text_content, length);
	if (w_file == -1)
	{
		close(o_file);
		return (-1);
	}

	close(o_file);

	return (1);
}

