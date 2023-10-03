#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: File name
 * @letters: Number of letters to read and print
 *
 * Return: bt_writtn or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc_skk;
	ssize_t bt_read, bt_wrttn;
	char *letters_store;

	if (filename == NULL)
		return (0);
	desc_skk = open(filename, O_RDONLY);
	if (desc_skk == -1)
		return (0);
	letters_store = malloc(sizeof(char) * letters);
	if (letters_store == NULL)
	{
		close(desc_skk);
		return (0);
	}
	bt_read = read(desc_skk, letters_store, letters);
	if (bt_read == -1)
	{
		close(desc_skk);
		free(letters_store);
		return (0);
	}
	bt_wrttn = write(STDOUT_FILENO, letters_store, bt_read);
	if (bt_wrttn == -1 || bt_wrttn != bt_read)
	{
		close(desc_skk);
		free(letters_store);
		return (0);
	}
	close(desc_skk);
	free(letters_store);
	return (bt_wrttn);
}
