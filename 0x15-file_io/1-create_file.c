#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Filename
 * @text_content: Content
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int desc_sk, output;

	if (filename == NULL)
		return (-1);
	desc_sk = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (desc_sk == -1)
		return (-1);
	if (text_content != NULL)
	{
		size_t len_sk = 0;

		while (text_content[len_sk] != '\0')
		{
			len_sk++;
		}
		output = write(desc_sk, text_content, len_sk);

		if (output == -1)
		{
			close(desc_sk);
			return (-1);
		}
	}
	close(desc_sk);
	return (1);
}
