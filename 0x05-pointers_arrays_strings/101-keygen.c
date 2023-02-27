#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int random = 0, counter = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (counter < 2772)
	{
		random = rand() % 128;
		if ((counter + random) > 2772)
			break;
		counter = counter + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - counter));
	return (0);
}
