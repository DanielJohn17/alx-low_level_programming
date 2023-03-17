#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char L = 'a';
	char U = 'A';

	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	while (U <= 'Z')
	{
		putchar(U);
		U++;
	}
	putchar("\n");
	return (0);
}
