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
	int n = 0;

	for (y = 48; y < 58; y++)
	{
	for (k = 48; k < 58; k++)
	{
	for (x = 48; x < 58; x++)
	{
	for (i = 48; i < 58; i++)
	{	
		putchar(y + n);
		putchar(k + n);
		putchar(' ');
		putchar(x + n);
		putchar(i + n);
	
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
