#include <stdio.h>
/**
 * main - print 16 base  using for and chars.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c;
	int i;

	for (i = 48 ; i != 58 ; i++)
	{
		putchar(i);
	}

	for  (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

