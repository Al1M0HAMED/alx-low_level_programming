#include "main.h"
/**
 * read_textfile - this function reads a text file and prints it to the
 * POSIX standard output.
 * @filename: is a null terminated string.
 * @letters: is the number of letters need to be written.
 * Return: number of bytes printed or 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number_of_bytes_read, number_of_bytes_written;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	number_of_bytes_read = read(fd, buff, letters);
	if (number_of_bytes_read < 0)
	{
		free(buff);
		return (0);
	}
	buff[number_of_bytes_read] = '\0';
	close(fd);
	number_of_bytes_written = write(STDOUT_FILENO, buff,
			number_of_bytes_read);
	if (number_of_bytes_written != number_of_bytes_read)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (number_of_bytes_read);
}
