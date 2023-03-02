#include "main.h"
/**
 * reverse_array - reverses data of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int l, l2, eq;

	for (l = 0; l < n - 1; l++)
	{
		for (l2 = l + 1; l2 > 0; l2--)
		{
			eq = *(a + l2);
			*(a + l2) = *(a + (l2 - 1));
			*(a + (l2 - 1)) = eq;
		}
	}
}
