#include <stdio.h>

/**
 * main - Prints English alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	if (i != 4 && i != 16)
	{
		putchar(alphabet[i]);
	}}
	putchar('\n');
	return (0);
}
