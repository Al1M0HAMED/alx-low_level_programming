#include "main.h"
/**
 * create_file - this function creates a file in 0600 mode and write inside it.
 * @filename: is the file name need to be created.
 * @text_content: is the content need to be written inside the file.
 * Return: 1 if successeded and -1 if faild.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_char_num, length_of_text_content, index;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		index = 0;
		while (text_content[index] != '\0')
			index++;

		length_of_text_content = index;
		written_char_num = write(fd, text_content, length_of_text_content);
		if (written_char_num != length_of_text_content)
			return (-1);
	}
	close(fd);
	return (1);
}
