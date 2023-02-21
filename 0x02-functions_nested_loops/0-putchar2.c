#include "main.h"
#include "string.h"

/**
 * main - Print _putchar followed by new line as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int name[] = "_putchar";
	int size = strlen(name);
	int count = 0;

	for ( count ; count < size; count++)
	{
		_putchar(name[count]);
	}
	_putchar('\n');
	return (0);
}
