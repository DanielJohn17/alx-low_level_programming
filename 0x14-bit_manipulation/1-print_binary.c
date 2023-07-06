#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	int binary_arr[32], i = 0, j;

	if (n == 0)
	{
		_putchar('0');
	}

	while ((1 << i) <= n)
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		unsigned long int bit = (n & (1 << j)) ? 1 : 0;

		_putchar(bit + '0');
	}
}

