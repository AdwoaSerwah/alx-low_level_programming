#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible
 * different combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;

	while (num1 <= 8)
	{
		int num2 = num1 + 1;

		while (num2 <= 9)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			if (num1 < 8 || num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
