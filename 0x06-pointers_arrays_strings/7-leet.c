#include "main.h"
/**
 * leet - encodes a string to  1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int c = 0, l;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (l = 0; l < 5; l++)
		{
			if (*(s + c) == low_letters[i] || *(s + c) == upp_letters[i])
			{
				*(s + c) = numbers[i];
				break;
			}
		}
		c++;
	}

	return (s);
}
