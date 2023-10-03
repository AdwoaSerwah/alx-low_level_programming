#include <stdio.h>
#include "main.h"

/**
 * cp - Copies contents of a file
 * @orig: Source file
 * @dest_sk: Destination
 *
 * Return: Nothing
 */
void cp(int orig, int dest_sk)
{
	char my_arr[BUFFER_SIZE];
	ssize_t bt_rd, bt_wrtt;

	while ((bt_rd = read(orig, my_arr, BUFFER_SIZE)) > 0)
	{
		bt_wrtt = write(dest_sk, my_arr, bt_rd);
		if (bt_wrtt == -1)
		{
			dprintf(2, "Error: Can't write to destination file\n");
			close(orig);
			close(dest_sk);
			exit(99);
		}
	}

	if (bt_rd == -1)
	{
		dprintf(2, "Error: Can't read from source file\n");
		close(orig);
		close(dest_sk);
		exit(98);
	}
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
	int orig, dest_sk;

	if (arg_count != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", avv[0]);
		exit(97);
	}
	orig = open(avv[1], O_RDONLY);
	if (orig == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", avv[1]);
		exit(98);
	}
	dest_sk = open(avv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_sk == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", avv[2]);
		close(orig);
		exit(99);
	}
	cp(orig, dest_sk);
	close(orig);
	close(dest_sk);
	return (0);
}
