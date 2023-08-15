#include "main.h"
/**
 * main - Entry point of the program.
 *
 * Description: This program prints _putchar followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	return (0);
}
