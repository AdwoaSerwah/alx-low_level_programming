#include <stdio.h>
#include "main.h"

/**
 * hd_err - Handles errors
 * @prog: Program
 * @msg_sk: Message
 * @filename: Filename
 *
 * Return: Nothing
 */
void hd_err(int prog, const char *msg_sk, char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg_sk, filename);
	exit(prog);
}

/**
 * hd_close - Handles errors
 * @prog: Program
 * @msg_sk: Message
 * @fd_value: fd_value
 *
 * Return: Nothing
 */
void hd_close(int prog, const char *msg_sk, int fd_value)
{
	dprintf(STDERR_FILENO, "%s %i\n", msg_sk, fd_value);
	exit(prog);
}

/**
 * cp - Copies the contents of one file to another
 * @src_file: Pointer to source file
 * @dest_file: Pointer to destination file
 */
void cp(char *src_file, char *dest_file)
{
	int src_fd, dest_fd, bytes_read;
	char buffer[BUFFER_SIZE];

	if (src_file == NULL)
		hd_err(98, "Error: Can't read from file", src_file);
	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
		hd_err(98, "Error: Can't read from file", src_file);
	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		hd_err(99, "Error: Can't write to", dest_file);
	while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		int bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
			hd_err(99, "Error: Can't write to", dest_file);
	}
	if (bytes_read == -1)
	{
		close(src_fd);
		hd_err(98, "Error: Can't read from file", src_file);
	}
	/*close(src_fd);*/
	if (close(src_fd == -1))
		hd_close(100, "Error: Can't close fd", src_fd);
	/*close(dest_fd);*/
	if (close(dest_fd) == -1)
		hd_close(100, "Error: Can't close fd", dest_fd);
}

/**
 * main - Entry point
 * @arg_count: Arguments count
 * @avv: Argument list
 *
 * Return: Always 0 (Success)
 */
int main(int arg_count, char *avv[])
{
	if (arg_count != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(avv[1], avv[2]);

	return (0);
}

