#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer
 * @size_r: Buffer size
 *
 * Return: 0 or r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0, j = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	r[size_r - 1] = '\0';
	while (len1 || len2 || carry)
	{
		if (i >= size_r - 1)
			return (0);
		sum = (len1 ? n1[--len1] - '0' : 0) + (len2 ? n2[--len2] - '0' : 0) + carry;
		carry = sum / 10;
		r[i++] = sum % 10 + '0';
	}
	while (j < i / 2)
	{
		char temp = r[j];

		r[j] = r[i - j - 1];
		r[i - j - 1] = temp;
		j++;
	}
	return (r);
}
