#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations
 * of single-digit numbers in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
