#include "main.h"

void print_binary(unsigned long int n)
{
	int binary_arr[32], i = 0, j;

	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		binary_arr[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary_arr[j] + '0');
	}
}

