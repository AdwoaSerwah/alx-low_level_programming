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
	int i = 0, actual_sum = 0, rem, expected_sum = 2772;
	char str[64];

	srand(time(NULL));
	while (i < 64)
	{
		str[i] = (rand() % 78) + '0';
		printf("%c", str[i]);
		actual_sum = actual_sum + str[i];
		if ((expected_sum - actual_sum) < 78)
		{
			rem = expected_sum - actual_sum;
			actual_sum = actual_sum + rem;
			str[i] = rem;
			printf("%c", str[i]);
			break;
		}
		i++;
	}
	/* printf("First loop: %s\n", str); */
	/* printf("actual_sum: %d\n", actual_sum); */
	return (0);
}
