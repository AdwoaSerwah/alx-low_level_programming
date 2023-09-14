#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * n: First operand
 *
 * Returns: sum of all the parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all_parameters;
	int sum;
	unsigned int i;

	va_start(all_parameters, n);

	if (n == 0)
		return (0);

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(all_parameters, int);
		i++;
	}
	va_end(all_parameters);
	return (sum);

}
