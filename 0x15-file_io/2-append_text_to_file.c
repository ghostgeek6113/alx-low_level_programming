#include "main.h"

/**
 * append_text_to_file - Funtion to add text to the end of a file
 * @filename: File name
 * @text_content: Text to add to the file
 * Return: 1 if successful or if the file exists and -1 if failed
 * or filename is null or if the file does not exist
 * or if no permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, text_content_len, byte_writen;

	/**
	* create a file with the open system call and set flags
	* O_WRONLY for write only and O_APPEND for appending the text
	*/
	file_descriptor(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		close(file_descriptor);
		return (-1);

	if (file_descriptor == -1)
		close(file_descriptor);
		return (-1);

	if (text_content != NULL)
	{
		for (text_content_len = 0; text_content[text_content_len];)
			text_content_len++;
	}

	byte_writen = write(file_descriptor, text_content, text_content_len);

	if (byte_writen == -1)
		close(file_descriptor);
		return (-1);

	close(file_descriptor);
	return (1);
}
