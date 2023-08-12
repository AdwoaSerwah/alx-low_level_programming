#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program uses putchar function to print
 * from 0 to 9 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
