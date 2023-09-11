#include <stdio.h>

/**
 * main - Entry point
 * @argc: Array size
 * @argv: Command line arguments array
 *
 * Description: Prints all arguments it receives
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
