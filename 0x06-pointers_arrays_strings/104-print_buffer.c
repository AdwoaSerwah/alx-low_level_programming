#include "main.h"

/**
 * print_buffer - Prints a buffer
 * @b: Buffer
 * @size: Byte size
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		printf("%08x: ", i);
		while (j < 10)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
			j++;
		}
		j = 0;
		while (j < 10)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i += 10;
	}
}
