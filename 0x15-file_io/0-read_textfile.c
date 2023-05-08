#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function to read a text file and print the content
 * to the POSIX standard output
 * @filename: File to read
 * @letters: Number of letters to be read in the text
 * Return: Number of letters read and printed or 0 if the file cannot
 * be opened or the filename is NULL or the write fails or the amount
 * of byte supposed to be written is not
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, byte_read, byte_writen;
	char data;

	file_descriptor = open(filename, O_RDONLY);

	/* if the read fails, return 0 */
	if (file_descriptor == -1)
		return (0);
	data = malloc(sizeof(char) * letters);
	byte_read = read(file_descriptor, data, letters);
	byte_writen = write(STDOUT_FILENO, data, byte_read);

	/* Once operations on files are done, close the file and free memory*/
	free(data);
	close(file_descriptor);
	return (byte_writen);
}
