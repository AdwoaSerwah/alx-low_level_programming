#include <stdio.h>

/**
 * main - Entry point
 * @argc: Array size
 * @argv: Array of command line arguments
 *
 * Description: Prints the number of arguments passed into it
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
