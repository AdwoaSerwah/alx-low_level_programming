#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Generates random valid passwords for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	char str[23];
	int i = 0;
	int len = sizeof(str) - 1;
	int sum = 0;

	srand(time(NULL));
	while (i < len)
	{
		char ch = (char)(rand() % 128);

		str[i] = ch;
		i++;
	}
	str[i] = '\0';
	/*printf("First loop: %s\n", str);*/
	i = 0;

	while (i < len)
	{
		str[i] = '~';
		sum = sum + (int)(str[i]);
		i++;
	}
	/* printf("sum: %d\n", sum); */
	printf("%s", str);
	return (0);
}
