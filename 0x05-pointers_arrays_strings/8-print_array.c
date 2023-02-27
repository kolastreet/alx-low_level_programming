#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int loop = 0;

	for (; loop < n; loop++)
	{
		printf("%d", *(a + loop));
		if (loop != (n - 1))
			printf(", ");
	}
	printf("\n");
}
