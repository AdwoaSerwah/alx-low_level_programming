#include "main.h"

/**
 * print_buffer - Prints a buffer
 * @b: Buffer
 * @size: Byte size
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, addr = 0, overflow;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	size--;
	while (i <= size)
	{
		printf("%08x: ", addr);
		j = 0, overflow = 0;
		while (j <= 9)
		{
			if (i <= size)
				printf("%02x", b[i]);
			else
			{
				printf("  ");
				overflow++;
			}
			if (j % 2 == 1)
				printf(" ");
			i++, j++;
		}
		i = i - j;
		j = j - overflow;
		while (j > 0)
		{
			if ((b[i] >= 0 && b[i] <= 31) || b[i] == 127)
				printf(".");
			else
				printf("%c", b[i]);
			i++, j--;
		}
		printf("\n");
		addr = addr + 10;
	}
}
