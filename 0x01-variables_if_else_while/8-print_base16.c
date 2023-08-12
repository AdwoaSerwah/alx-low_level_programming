#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all the numbers of base 16
 * in lowercase followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_num = '0';
	char hex_letter = 'a';

	while (hex_num <= '9')
	{
		putchar(hex_num);
		hex_num++;
	}
	while (hex_letter <= 'f')
	{
		putchar(hex_letter);
		hex_letter++;
	}
	putchar('\n');
	return (0);
}
