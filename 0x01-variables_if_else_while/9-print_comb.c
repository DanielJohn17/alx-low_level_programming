#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = "0";

	while (i <= "9")
	{
		if (i != "9")
		{
			putchar(",");
			putchar(" ");
		}
		++i;
	}
	putchar('\n');
	return (0);
}
