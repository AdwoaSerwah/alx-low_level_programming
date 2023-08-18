#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int num1, num2;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 15)
		{
			if (num2 > 9)
				_putchar('0' + num2 / 10);
			_putchar('0' + num2 % 10);
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
