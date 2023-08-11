#include "main.h"
/**
 *
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number_of_bytes_read, number_of_bytes_written;
	char *buff;

	fd = open(filename, O_RDONLY);
	buff = malloc(sizeof(char) * letters + 1);
	number_of_bytes_read = read(fd, buff, letters);
	if (number_of_bytes_read == -1 || buff == NULL || filename == NULL
			|| letters == 0 || fd < 0)
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
