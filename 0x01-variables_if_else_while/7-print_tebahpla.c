#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
