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
		if (i == 57 && x == 57)
		{
			putchar('\n');
		}
		else 
		{
			putchar(',');
			putchar(' ');
		}
	}}
	return (0);
}
