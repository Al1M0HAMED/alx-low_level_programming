#include "main.h"
/**
 * append_text_to_file - this function appends to a file.
 * @filename: is a null terminated string.
 * @text_content: is a null terminated string that need to append the file.
 * Return: 1 on succes 0 in failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, index;
	ssize_t number_of_bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[index] != '\0')
			index++;
		number_of_bytes_written = write(fd, text_content, index);
		if (number_of_bytes_written < index)
			return (-1);
	}
	close(fd);
	return (1);
}
