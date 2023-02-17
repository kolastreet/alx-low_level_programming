#include <stdio.h>
/**
 * main - print alphabet in reverse using for and chars.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for  (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

