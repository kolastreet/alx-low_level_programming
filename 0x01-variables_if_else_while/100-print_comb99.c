#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 nested
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;

	for (x = 48; x < 58; x++)
	{
	for (i = 48; i < 58; i++)
	{
		putchar(x);
		putchar(i);
		if (i != 58 && x != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}}
	putchar('\n');
	return (0);
}
