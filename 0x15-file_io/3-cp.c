#include <stdio.h>
#include "main.h"

/**
 * hd_err - Handles errors
 * @prog: Program
 * @msg_sk: Message
 *
 * Return: Nothing
 */
void hd_err(int prog, const char *msg_sk)
{
	dprintf(STDERR_FILENO, "%s\n", msg_sk);
	exit(prog);
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
	const char *orig;
	const char *dest_sk;
	int f_fr, f_dest;
	ssize_t bt_rd;
	char my_arr[BUFFER_SIZE];

	if (arg_count != 3)
	{
		hd_err(97, "Usage: cp orig dest_sk");
	}
	orig = avv[1];
	dest_sk = avv[2];
	f_fr = open(orig, O_RDONLY);
	if (f_fr == -1)
	{
		hd_err(98, "Error: Can't read from file");
	}
	f_dest = open(dest_sk, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_dest == -1)
	{
		hd_err(99, "Error: Can't write to file");
	}
	while ((bt_rd = read(f_fr, my_arr, BUFFER_SIZE)) > 0)
	{
		ssize_t bt_wrtt = write(f_dest, my_arr, bt_rd);

		if (bt_wrtt == -1)
		{
			hd_err(99, "Error: Can't write to file");
		}
	}
	if (bt_rd == -1)
		hd_err(98, "Error: Can't read from file");
	if (close(f_fr) == -1 || close(f_dest) == -1)
		hd_err(100, "Error: Can't close fd");
	return (0);
}
