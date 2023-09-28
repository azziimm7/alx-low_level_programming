#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @b: points to a string of 0's and 1's
 * @i: is the variable to hold the decimal format
 * Return: decimal format of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		i = i * 2 + (*b++ - '0');
	}
	return (i);
}
