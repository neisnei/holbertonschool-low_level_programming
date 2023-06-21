#include <stdio.h>

/**
 * main - Prints the lowercase alphabetin reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 'z'; i > 'a'; i++)
	{
		putchar('a' + i);
	}
	putchar ('\n');
	return (0);
}
