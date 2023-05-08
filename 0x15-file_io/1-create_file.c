#include "main.h"

/**
 * create_file - Function to create files from filename and add content
 * @filename: Name of the file to be created
 * @text_content: Text to be added to the file, ending with NULL
 * Return: 1 if successful,or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, text_content_len, byte_writen;

	/**
	* Create the file using open system call, pass in the filename and
	* flags:
	* O_CREAT used to create a new file if it doesn't already exist,
	* O_RDWR used to allow both reading and writing access to the file,
	* O_TRUNC used to truncate the file if it already exists
	* 0600 used to specify the permission rw-------
	*/
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (filename == NULL)
	{
		return (-1);
	}

	if (file_descripto == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (text_content_len = 0; text_content[text_content_len];)
			text_content_len++;
	}

	byte_writen = write(file_descriptor, text_content, text_content_len);

	if (byte_writen == -1)
		close(file_descritor);
		return (-1);

	/* Remember to close the file once manipulation is over */
	close(file_descriptor);
	return (1);
}
