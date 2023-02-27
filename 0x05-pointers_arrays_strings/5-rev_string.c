#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int counter = 0, l1, l2;
	char *str, t;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	str = s;

	for (l1 = 0; l1 < (counter - 1); l1++)
	{
		for (l2 = l1 + 1; l2 > 0; l2--)
		{
			t = *(str + l2);
			*(str + l2) = *(str + (l2 - 1));
			*(str + (l2 - 1)) = t;
		}
	}
}
