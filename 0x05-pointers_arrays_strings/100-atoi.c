#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int counter = 0, a = 0, oi = 0, pn = 1, m = 1, l;

	while (*(s + counter) != '\0')
	{
		if (a > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
			break;

		if (*(s + counter) == '-')
			pn *= -1;

		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (a > 0)
				m *= 10;
			a++;
		}
		counter++;
	}

	for (l = counter - a; l < counter; l++)
	{
		oi = oi + ((*(s + l) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
