#include "main.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *main = "_putchar";

	while (*main)
	{
		_putchar(*main);
		_putchar++;
	}
	_putchar('\n');
	return (0);
}
