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
	int y;
	int k;

	for (y = 48; y < 58; y++)
	{
	for (k = 48; k < 58; k++)
	{
	for (x = 48; x < 58; x++)
	{
	for (i = 48; i < 58; i++)
	{
		putchar(y);
		putchar(k);
		putchar(' ');
		putchar(x);
		putchar(i);
	       if (i == 57 && x == 57 && y == 57 && k == 57)
	       { putchar('\n');
	       }
	       else 
	       {       
			putchar(',');
			putchar(' ');
	       }
	}}
	}}
	return (0);
}